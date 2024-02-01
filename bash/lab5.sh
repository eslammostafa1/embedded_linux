#!/bin/bash

# the battery state for my lab top

BATTERY_PATH="/sys/class/power_supply/BAT0/capacity"
BATTERY_VALUE=$(cat $BATTERY_PATH)
echo $BATTERY_PATH 
echo "$BATTERY_VALUE"

if [ "${BATTERY_VALUE} " -lt 95 ]; then 
    notify-send "please charge battery ($BATTERY_VALUE)"
else
    notify-send "charged battery ($BATTERY_VALUE)"
fi