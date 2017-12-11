#!/bin/bash

awk -F: '$3 {print  $3}' ./passwd
