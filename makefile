# IBM Developer's Workframe/2 Make File Creation run at 13:13:25 on 04/07/93

# Make File Creation run in directory:
#   E:\ICLUI\TMBAR;

.SUFFIXES:

.SUFFIXES: .cpp .c .hpp .rc

ALL: TMBAR.EXE 

TMBAR.EXE:  tmbar.obj
   icc /tdp /B" /PM:PM" \
   TMBAR.OBJ /FETMBAR.EXE \
   dde4muii.lib 



{.}.cpp.obj:
   icc.exe -Fd -c  .\$*.cpp



