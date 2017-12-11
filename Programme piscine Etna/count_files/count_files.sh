#!/bin/bash
let "var= $(find . -type d | wc -l) - 1"
echo "dossier " $var && echo "fichier" $(find . -type f | wc -l)


