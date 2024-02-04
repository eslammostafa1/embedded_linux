#!/bin/bash

if ! command -v youtube-dl &> /dev/null; then
    echo "Error: youtube-dl not found. Please install it first."
    exit 1
fi

download_video() {
    local video_url="$1"
    local output_path="$2"

    if [ ! -d "$output_path" ]; then
        mkdir -p "$output_path"
    fi

    youtube-dl -f 'bestvideo[ext=mp4]+bestaudio[ext=m4a]/bestvideo+bestaudio' -o "$output_path/%(title)s.%(ext)s" "$video_url"
}

read -r -p "Enter the YouTube video URL: " video_url

read -r -p "Enter the output path (press Enter for the current directory): " output_path
output_path="${output_path:-.}"

download_video "$video_url" "$output_path"
