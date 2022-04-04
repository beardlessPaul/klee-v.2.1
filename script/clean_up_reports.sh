#!/bin/bash

touch reports_lock
rm -i reports_lock

if [[ -f $PWD/reports_lock ]]; then
    echo Cancel
    rm reports_lock
    exit 0
fi

rm -rvf ./reports

echo Ok
