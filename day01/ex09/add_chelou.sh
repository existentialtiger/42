#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | tr "\'\"\?\!" "0234" | tr "\\" "1" |  tr "mrdoc" "01234" | xargs echo ibase=5\; obase=D\; | bc | tr "0123456789ABC" "gtaio luSnemf"
