#!/bin/bash
if [ -z "$1" ] && [ -z "$2" ]; then 
    echo " file 1 or file 2 not found " 
    exit 0
fi 

file1=$(md5sum "$1") #MD5 checksums for each file
file2=$(md5sum "$2")

echo "$file1"
echo "$file2"
echo -------------------------------

read -ra ADDR1 <<<"$file1"
read -ra ADDR2 <<<"$file2"

# echo "${ADDR1}" # same command as =>  echo "${ADDR1[0]}"
# echo "${ADDR2}" # same command as =>  echo "${ADDR2[0]}"

echo "${ADDR1[0]}"
echo "${ADDR2[0]}"
echo -------------------------------

echo "${ADDR1[1]}"
echo "${ADDR2[1]}"
echo -------------------------------

if [ "${ADDR1[0]}" = "${ADDR2[0]}" ]; then 
    echo " similar " 
else 
    echo " different " 
fi 
