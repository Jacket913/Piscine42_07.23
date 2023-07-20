#!/bin/sh

FDcount=$(find . -type f,d -print | wc -l)
echo $FDcount
