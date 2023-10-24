#!/bin/bash

#./push_swap $@

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
	{
		norminette
		make re -s
		echo "				make re"
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
		bash /Users/shenya/norm.sh
		make re -s
		echo "				make re"
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



