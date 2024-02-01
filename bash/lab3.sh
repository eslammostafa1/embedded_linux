#!/bin/bash

value="${HOME}/Desktop\n${HOME}/Documents\n${HOME}/Downloads"

# select=$(echo -e "$value" | dmenu )
select=$(echo -e "$value" | rofi -dmenu )
# select=$(echo -e "$value" | fzf )

nautilus "$select" &

