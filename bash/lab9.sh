#!/bin/bash

if ! command -v speedtest-cli &>/dev/null; then
    echo "speedtest-cli is not installed. "
    exit 1
fi

speedtest=$(speedtest-cli)

echo "Speed test Reaults: "
echo "$speedtest"
