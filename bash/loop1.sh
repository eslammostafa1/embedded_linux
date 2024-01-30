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

#while 
