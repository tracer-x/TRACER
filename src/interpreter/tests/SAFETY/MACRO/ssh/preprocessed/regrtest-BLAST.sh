#!/bin/bash

#######################################################################
# Optional to be  configured 
#######################################################################
TRACER_HOME=/home/jorge/SvnReps/Systems/TRACER/trunk/src/clpr
stat=regrtest-BLAST_$(date +%y%m%d).stat
BLAST_CMMD="time -p pblast.opt"

#######################################################################
# Should not change below onwards
#######################################################################

SSH_DIR=${TRACER_HOME}/tests/SAFETY/MACRO/ssh/preprocessed

currtest=""
counter=0

getstatsSAFE() {
if grep ":-)" test_${currtest}_${counter}.out; then
    echo "Regression test on ${currtest}_${counter} OK"
    
    echo "[${counter}]: ${currtest}" >> $stat
    echo "Program SAFE" >> $stat
    echo `grep "Number of predicates" test_${currtest}_${counter}.out` >> $stat
    echo `grep "real "  test_${currtest}_${counter}.out` | sed -e 's@real@Time:@g' >> $stat
else 
    if grep ":-(" test_${currtest}_${counter}.out; then
	echo "Regresion test on ${currtest}_${counter} FAILED"
    fi
fi
}

getstatsUNSAFE() {
if grep ":-(" test_${currtest}_${counter}.out; then
    echo "Regression test on ${currtest}_${counter} OK"
    
    echo "[${counter}]: ${currtest}" >> $stat
    echo "Program UNSAFE" >> $stat
    echo `grep "Number of predicates" test_${currtest}_${counter}.out` >> $stat
    echo `grep "real "  test_${currtest}_${counter}.out` | sed -e 's@real@Time:@g' >> $stat
else 
    if grep ":-)" test_${currtest}_${counter}.out; then
	echo "Regresion test on ${currtest}_${counter} FAILED"
    fi
fi
}

runORIGSSH(){

currtest="s3_srvr.blast"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.1"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.1.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.2"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.2.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.3"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.3.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.4"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.4.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.5"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.5.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.6"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.6.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.7"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.7.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.8"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.8.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.9"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.9.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.10"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.10.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.11"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.11.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.12"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.12.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.13"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.13.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.14"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.14.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.15"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.15.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

currtest="s3_srvr.blast.16"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.16.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]

}

runPREPSSH(){
currtest="s3_srvr.blast.1"
echo "[${counter}] ${currtest}.c"
(${BLAST_CMMD} -nofp -predH 7 ${SSH_DIR}/s3_srvr.blast.single.function.1.c > test_${currtest}_${counter}.out) 2>> test_${currtest}_${counter}.out
getstatsSAFE
counter=$[ ${counter} + 1]
}

####################################################################################
# SSH 
####################################################################################

runPREPSSH
#runORIGSSH


# Clean temporary files
rm -f *.bdd
rm -f *.abs
rm -f *.btr
rm -f *.out


