#!/bin/bash

# build.sh
#
# Very simple script that automates the tessie build process.
#
# Usage:
#   . build.sh 
#
# Author:
#   Matthew Franks <m.l.franks@cern.ch>

cd src
qmake -o Makefile tessie.pro
make -j2
cd ..

printf "Now run:\n'sudo systemctl restart tessie'\n'sudo systemctl restart tessieWeb'\n"
