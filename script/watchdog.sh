#!/bin/bash

while true; do
    CNT=$(pgrep reproduce-me | wc -l)
    if (( $CNT > 1)); then
        echo "Panic: more than one instance of reproduce-me is running!"
        exit 1
    fi
    sleep 1
    echo "Healthy"
done
