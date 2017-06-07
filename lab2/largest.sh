#!/bin/sh

if [ "$#" -ne  "3" ]; then
	echo "Error, argument case invalid"

else

	max="$1"

	if [ "$1" -gt "$2" ]; then
		max="$1"
	
		if [ "$1" -gt "$3" ]; then
			max="$1"
		else 
			max="$3"
		fi
	else
		max="$2"

		if [ "$2" -gt "$3" ]; then
			max="$2"
		else
			max="$3"
		fi
	fi
	echo "$max"

fi
