#!/bin/bash

mkdir test0
touch test1
mkdir test2
touch test3
touch test4
ln test3 test5
touch testJour01

chmod 715 test0
chmod 414 test1
chmod 504 test2
chmod 404 test3
chmod 020 test4
chmod 615 testJour01

touch -t 201210042020 test1 
touch -t 201210042020 test0
touch -t 201210042020 test2
touch -t 201210042020 test3
touch -t 201210042020 test4
touch -t 201210042020 testJour01
ln -s testJour01 test6
touch -h -t 201210042020 test6
ls -l


