#!/bin/sh

arr=(1 3 2 4 5 6 8 7 9)

for ((i=0;i<${#arr[@]};i++))
do
	minimum=$i
	for ((j=i+1;j<${#arr[@]};j++))
	do
		if [ ${arr[j]} -lt ${arr[minimum]} ] 
			then	
			minimum=$j
		fi
	done

temp=${arr[i]}
arr[i]=${arr[minimum]}
arr[minimum]=$temp

done

echo ${arr[*]}
