#!/bin/sh 
ldapsearch -Q "(cn=* *bon*)" cn | grep 'cn:' | wc -l | rev | cut -d' ' -f 1 | rev
