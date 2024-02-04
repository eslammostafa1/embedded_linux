#!/bin/bash

main_file="system_info.txt" >"$main_file"

add_section()
{
    echo "--------------------------" 
    echo "$1" 
    echo "--------------------------"    
} >>"$main_file" 

add_section "system report - $(date)"
{
    hostname 
    echo -e "\n" 
} >> "$main_file"


add_section "CPU info "
{
    lscpu 
    echo -e "\n" 
} >> "$main_file"


add_section "memory info "
{
    free -h
    echo -e "\n" 
} >> "$main_file"


add_section "disk info "
{
    df -h 
    echo -e "\n" 
} >> "$main_file"


add_section "network info "
{
    ifconfig 
    echo -e "\n" 
} >> "$main_file"
