#!/bin/bash

MAXTEST=20
storage=$(df -h | awk '$6=="/"' | awk '{print $5}' | tr -d '%')

echo "$storage"

# val="${storage::-1}" #this line may use instaed of tr command to remove % sign

if [ "$storage" -gt $MAXTEST ]; then
    notify-send "the home disk run from storge space ($storage)MB"
fi
