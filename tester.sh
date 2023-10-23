#!/bin/bash

make re -s
echo "				make re"
#./push_swap $@

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
	{
		echo "				leak check"
		valgrind ./push_swap $@
		echo "							"
		ARG=$@; ./push_swap $ARG | ./checker* $ARG
		echo "				checker"
		./push_swap $@ | wc -l
		echo "				command count"
		make -s fclean
		echo "				make fclean"
	}
else
	{
		ARG=$@; ./push_swap $ARG | ./checker* $ARG
		echo "				checker"
		./push_swap $@ | wc -l
		echo "				command count"
		echo "							"
		echo "				leak check"
		export MallocStackLogging=1
		leaks --atExit -- ./push_swap $@
		echo "							"
		echo "		please make fclean"
		echo "							"
	}
fi



