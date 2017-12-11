#!/bin/bash

awk -F: '$3 % 42==0 {print $1}' ./passwd
