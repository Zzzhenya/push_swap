#!/bin/bash

#Usage : bash tester.sh 1 3 4 2

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
	{
		echo "				leak check"
		valgrind ./push_swap $@
		echo "							"
		ARG=$@; ./push_swap $ARG | ./checker* $ARG
		echo "				checker result"
		./push_swap $@ | wc -l
		echo "				Moves count"
	}
else
	{
		ARG=$@; ./push_swap $ARG | ./checker* $ARG
		echo "				checker result"
		./push_swap $@ | wc -l
		echo "				Moves count"
		echo "							"
		echo "				leak check"
		export MallocStackLogging=1
		leaks --atExit -- ./push_swap $@
		echo "							"
	}
fi



