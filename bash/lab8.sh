#!/bin/bash

main_file="system_info.txt" 

>"$main_file"

add_section(){
    echo "--------------------------" >>"$main_file" 
    echo "$1" >> "$main_file"
    echo "--------------------------" >>"$main_file" 
    
}

add_section "system report - $(date)"
hostname >> "$main_file"
whoami >> "$main_file"
echo -e "\n" >> "$main_file"

add_section "CPU info "
lscpu >> "$main_file"
echo -e "\n" >> "$main_file"

add_section "memory info "
free >> "$main_file"
echo -e "\n" >> "$main_file"

add_section "disk info "
df -h >> "$main_file"
echo -e "\n" >> "$main_file"

add_section "network info "
ifconfig >> "$main_file"
echo -e "\n" >> "$main_file"