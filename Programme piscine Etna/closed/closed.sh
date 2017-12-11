#!/bin/bash

let "compt = 1"
#var = "$(grep  'close ' passwd )"
#var2 ="$(cut -d 'close ' -f 1"

#awk -F: '$var == true  {print $1}' passwd
#grep close passwd &&

awk -F ':' '{print $1}' passwd | grep 'close' passwd
#cut -d: -f1 passwd

