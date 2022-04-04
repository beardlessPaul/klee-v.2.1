#!/bin/bash

echo y | ./clean_up_workdir.sh
source $PWD/$1/envi
for run in {1..1}; do
    python3 launcher.py --config=$PWD/$1/config.json
done

echo y | ./clean_up_reports.sh
for s in $(ls samples* -d); do
    DIR=$PWD/workdir/$s/
    if [[ -d $DIR ]]; then
        echo "+ Analyzing $s"
        python3 analyzer.py --dir=$DIR
        mkdir -p $PWD/reports/$s/
        cp $DIR*.csv $PWD/reports/$s/
    else
        echo "- Skipping $s"
    fi
done

