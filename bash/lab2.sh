#!/bin/bash

#experations

#w=$(expr 1 - 3)
# w= expr 1 - 3
# let w=1-3
# w=$((1-3))
# w=$((10+3))
# w=$((10/3))
# w=$((10*3))
w=$((10**3)) #power 
((w++))
# ((w--))
echo $w

#arguments
echo "arg 0: $0"
echo "arg 1: $1"
echo "arg 2: $2"
echo "arg 3: $3"
echo "arg 4: $4"
echo "arg 5: $5"
echo "arg 6: $6"
echo "arg 7: $7"
echo "arg 8: $8"
echo "arg 9: $9"
# echo "arg 10: $10"  #error max 9 arg 

echo "total args : $#"
echo "total args string : $*"
# for i in $*; do #Use "$@" (with quotes) to prevent whitespace problems.
for i in "$@"; do
    # result=$((i + 2))
    # echo " arg array : $result"
    echo " arg array : $((i + 2))"
done

echo "total process ID for script : $$"
((w++))
e=$? # check the last command 0 means success or nor faild 
echo "total \$? : $e"

history | grep sss
ret=$?
echo "Command exited with $ret"
if [ $ret -ne 0 ]
then
  echo "Failed"
fi

