#!/bin/bash

groups | awk '{gsub(/ /, ",") }1'
