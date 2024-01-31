#!/bin/bash


BATTERY_PATH="/sys/class/power_supply/BAT1/capacity"
BATTERY_VALUE=$(cat $BATTERY_PATH)

if ["${BATTERY_VALUE} " -lt 120 ]; then 
    notify-send "please charge battery $(BATTERY_VALUE)"
fi