#!/bin/bash

sed  "s/prof/gentil/g" ./passwd | sed "s/etna1/newbee/g" ./passwd | grep "newbee" & grep "gentil"
#awk '{gsub(/etna1/, "newbee")}' ./passwd #| awk '{gsub(/prof/, "gentil"); print }' ./passwd
