# TRACER Symbolic Execution Tool

Copyright 2008-2016 National University of Singapore. All rights reserved.

See LICENSE.md for license information of TRACER. This distribution contains third party software. See lib/LICENSE for the copyright and license information of the included third-party software.

This is a version of TRACER symbolic execution tool with CIL
front-end. Chu Duc Hiep, Joxan Jaffar, Rasool Maghareh, Vijayaraghavan
Murali, Jorge Navas, Andrew Santosa, and Razvan Voicu contributed to
its initial development. 

Much appreciated feedbacks have been provided by Jia Su.

**Prerequisites**

- jdk  >= 1.5 
- ant  >= 1.7.0
- gpp  >= 2.24
- ocaml >= 3.12.1 (for CIL)

**Installation by Building TRACER Distribution**

This version of TRACER may not have all the features, but it has the
interpolation (abstraction learning) algorithm for search-space
reduction already implemented. For running on Linux/x86 systems,
execute `ant dist` to create `tracer-0.1.tar.gz` tracer distribution
package in the source root.  Unpack `tracer-0.1.tar.gz` into your
preferred directory, say `<some_prefix>` and follow further
instructions in `<some_prefix>/tracer-0.1/README`.

**Running TRACER in the Source Tree**

This version is more advanced and has more features.

1. Set up environment variables `TRACER_PATH` and `CLPR_BASE_PATH`.

   For instance, in bash:
   ```
   export TRACER_PATH=<some_prefix>/tracer
   export CLPR_BASE_PATH=<some_prefix>/tracer/src
   ```
   For convenience, add to `PATH` the directory `$TRACER_PATH/bin`

2. Build CLP(R):
   ```
   cd $TRACER_PATH/src/clpr-1.2b
   make
   ```   

3. Build `cilly` if necessary. There is a pre-built `cilly` in both `$TRACER_PATH/lib` and `$TRACER_PATH/bin` for Linux x86_64, however, you can build it in the following way:
   ```
   cd $TRACER_PATH/lib/cil-1.3.7
   ./configure && make
   cp obj/x86_LINUX/cilly.asm.exe $TRACER_PATH/bin/cilly
   cp obj/x86_LINUX/cilly.asm.exe $TRACER_PATH/lib/cilly
   ```
   Note CIL needs OCaml. We tried with 3.11 but it does not work. The version we tested is 3.12.1

4. Run one of the following scripts:

   - `tracer` - run TRACER from the command line. You need to specify which analysis to run. For example `tracer slicer` will run the slicer. Run `tracer -help` for help on how to run the script. 
   - `gtracer` - run TRACER using a GUI
   - `cilly` - run CIL (part of the compiler)

   Some utilities:

   - `c2c` - output the symbolic execution tree in C format.
   - `allfigs2pdf`  - convert all dot files into pdf and open them using a pdf reader.

**Files and Directories**

   - `build.xml`
   - `classes` - contains all *.class of the system (GENERATED AUTOMATICALLY)
   - `lib` - contains *.jar files 
   - `bin` - contains all scripts 
   - `dist` - tools to generate the distribution version
   - `src`
     - `compiler/antlr` - contains the compiler from C to CLP 
     - `compiler/GUIFrontEnd` - contains the GUI front end of the system
     - `interpreter` - contains the interpreter that runs the CLP program


      
