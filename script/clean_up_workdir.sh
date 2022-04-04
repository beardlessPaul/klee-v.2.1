#!/bin/bash

touch workdir_lock
rm -i workdir_lock

if [[ -f $PWD/workdir_lock ]]; then
    echo Cancel
    rm workdir_lock
    exit 0
fi

rm -rvf workdir
rm -vf errors.log

echo Ok
