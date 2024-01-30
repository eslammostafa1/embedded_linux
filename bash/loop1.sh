#!/bin/bash

for i in 1 2 3 4 5 6; do 
    echo $i
done

echo "---------------------"

for i in {1..7}; do 
    echo "$i"
done 

echo "---------------------"

counter="1 2 3 4 5 6 7 8"
for i in $counter; do 
    echo "$i"
done

echo "---------------------"

#while 

x=0
y=6
while [[ $x -le 6 && $y -ge 0 ]]
do
echo  "x=$x"
echo "y=$y"
((x++))
((y--))
done
echo " thanks " 

echo "---------------------"

i=1
until [ $i -gt 10 ]
do
echo $i
((i++))
done

echo "---------------------"
