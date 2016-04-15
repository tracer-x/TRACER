package tracernb;

import java.io.*;

/**
 * manages the process and its pipes
 * @author vijay
 */
public class ProcessManager implements Runnable {

    private ProcessBuilder pb = null;

    private Process p = null;

    private boolean isRunning = false;

    private InputPipe inPipe = null;
    private OutputPipe outPipe = null;

    private final Object processLock = new Object();

    public ProcessManager(String dir, String cmd) {
        pb = new ProcessBuilder(dir + "/" + cmd);
        pb.directory(new File(dir));
        pb.redirectErrorStream(true);

        inPipe = new InputPipe(this);
        outPipe = new OutputPipe(this);
    }

    public ProcessManager(ProcessBuilder pb) {
        this.pb = pb;
        pb.redirectErrorStream(true);

        inPipe = new InputPipe(this);
        outPipe = new OutputPipe(this);
    }

    public Object getLock() {
        return processLock;
    }

    public OutputStream getProcessInput() {
        return p.getOutputStream();
    }

    public InputStream getProcessOutput() {
        return p.getInputStream();
    }

    public boolean isRunning() {
        return isRunning;
    }

    public InputPipe getInputPipe() {
        return inPipe;
    }

    public OutputPipe getOutputPipe() {
        return outPipe;
    }

    public int getExitValue() {
        return p.exitValue();
    }

    public void run() {
        ///////////////////////////////////////////
        // RUN THE PROCESS
        ///////////////////////////////////////////
        try {
            p = pb.start();
            isRunning = true;

            new Thread(inPipe).start();
            new Thread(outPipe).start();

            DEBUG.print("process started and pipes opened..");
        }
        catch (IOException e) {
            FATAL.error("in trying to run process. " + e.getMessage());
        }

        ///////////////////////////////////////////
        // WAIT FOR PROCESS TO COMPLETE
        ///////////////////////////////////////////
        try {
            DEBUG.print("waiting for process to complete..");
            p.waitFor();
        }
        catch (InterruptedException e) {
            FATAL.error("in waiting for process to complete. " + e.getMessage());
        }

        ///////////////////////////////////////////
        // FORMALITIES AFTER COMPLETION
        ///////////////////////////////////////////
        try {
            isRunning = false;
            DEBUG.print("process " + pb.command() + " completed execution");
            p.getErrorStream().close();

            // in case input pipe was waiting for input
            synchronized(inPipe.getLock()) {
                inPipe.getLock().notifyAll();
            }

            // in case some other thread is waiting for this process to complete
            synchronized(processLock) {
                processLock.notify();
            }
        }
        catch (IOException e) {
            FATAL.error("in closing the process. " + e.getMessage());
        }

    }
}

/**
 * pipe to feed input to the process
 * @author vijay
 */
class InputPipe implements Runnable {

    private final String lineSeparator = System.getProperty("line.separator");

    private String input = null;

    private final Object lock = new Object();

    private ProcessManager pm = null;

    public InputPipe(ProcessManager pm1) {
        pm = pm1;
    }

    public void setInput(String in) {
        synchronized(lock) {
            input = in;
            lock.notify(); // wake up the input pipe thread
        }
    }

    public Object getLock() {
        return lock;
    }

    public void run() {
        try {
            final BufferedWriter bw = new BufferedWriter(
                    new OutputStreamWriter(pm.getProcessInput()));

            while(true) {
                // "if" is enough as there will be no other threads waiting
                synchronized(lock) {
                    if(input == null && pm.isRunning()) {
                        DEBUG.print("input is null. sleeping on lock..");
                        lock.notify(); // notify the lock that the previous input has been processed
                        lock.wait();   // wait on the same lock
                    }
                }
                if(!pm.isRunning())
                    break;
                DEBUG.print("lock released! writing to input pipe: " + input);
                bw.write(input);
                bw.write(lineSeparator);
                bw.flush();
                input = null;
            }
            bw.close();
            DEBUG.print("inpipe closed");
        }
        catch (InterruptedException e) {
            FATAL.error("in waiting on input lock. " + e.getMessage());
        }
        catch (IOException e) {
            throw new IllegalArgumentException("IOException sending data to process");
        }
    }
}

/**
 * pipe to obtain output from the process
 * @author vijay
 */
class OutputPipe implements Runnable {

    private javax.swing.JTextArea outputBox = null;

    private ProcessManager pm = null;

    private boolean consoleOutput = true;

    private File logFile = null;
    private BufferedWriter bw = null;

    public OutputPipe(ProcessManager pm1) {
        pm = pm1;
    }

    public void setGUIOutputMode(javax.swing.JTextArea out) {
        outputBox = out;
        consoleOutput = false;
        logFile = null;
    }

    public void setConsoleOutputMode() {
        consoleOutput = true;
        outputBox = null;
        logFile = null;
    }

    public void setLogOutputMode(File f) {
        logFile = f;
        outputBox = null;
        consoleOutput = false;
    }

    public void run() {
        try {
            final BufferedReader br = new BufferedReader(
                    new InputStreamReader(pm.getProcessOutput()));
            String line;

            if(logFile != null) {
                bw = new BufferedWriter(new FileWriter(logFile));
            }

            // main loop of output pipe (the thread keeps looping here).
            while ((line = br.readLine()) != null) {
                print(line);
            }

            DEBUG.print("outpipe closed");

            // close all buffers
            br.close();
            if(logFile != null)
                bw.close();
        }
        catch (IOException e) {
            throw new IllegalArgumentException("IOException receiving data from process");
        }
    }

    private void print(String s) {
        if(consoleOutput)
            DEBUG.print(s);
        else if(logFile != null) {
            try {
                bw.write(s + "\n");
            }
            catch (IOException e) {
                FATAL.error("in writing to log file. " + e.getMessage());
            }
        }
        else if(outputBox != null) {
            outputBox.append(s + "\n");
            outputBox.setCaretPosition(outputBox.getText().length());
        }
        else { // error
            FATAL.error("output pipe's mode not set!");
        }
    }
}