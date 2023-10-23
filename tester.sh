#!/bin/bash

make re -s
echo "				make re"
#./push_swap $@
echo "				leak check"
valgrind ./push_swap $@
echo "							"
ARG=$@; ./push_swap $ARG | ./checker* $ARG
echo "				checker"
./push_swap $@ | wc -l
echo "				command count"
make -s fclean
echo "				make fclean"