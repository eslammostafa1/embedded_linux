#!/bin/bash

choice=$(echo -e "Logout\nReboot\nShutdown\nexit" | dmenu -p "Select an action: ")

if [ "$choice" = "Logout" ]; then
    pkill -KILL -u "$USER"
elif [ "$choice" = "Reboot" ]; then
    sudo reboot
elif [ "$choice" = "Shutdown" ]; then
    sudo shutdown -h now
elif [ "$choice" = "exit" ]; then
    exit 1
else
    echo "Invalid choice"
fi
