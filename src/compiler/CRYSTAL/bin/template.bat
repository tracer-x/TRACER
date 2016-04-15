@echo off

set verbose=off
set vmargs=
set args=

:LOOP
if [%1] == [] goto DONE 
if [%1] == [-v] goto VERB 
if [%1] == [-h] goto HEAP 
if [%1] == [-j] goto VMARG 

set args=%args% %1
SHIFT
goto LOOP

:VERB
SHIFT
set verbose=on
goto LOOP

:HEAP
SHIFT
set vmargs=%vmargs% -Xmx%1m
SHIFT
goto LOOP

:VMARG
SHIFT
set vmargs=%vmargs% %1
SHIFT
goto LOOP

:DONE
set cmd="@JAVA@" -ea %vmargs% -cp "@TOP@/classes@SEP@@TOP@/jars/java-cup-11a-runtime.jar" @MAIN@ %args%

if [%verbose%] == [off] goto RUN
echo %cmd%

:RUN
%cmd%
