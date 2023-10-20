#include "push_swap.h"

int parse_for_dup(char **argv)
{
	int	i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (i != j && ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (-1);
			j ++;
		}
		i ++;
	}
	return (0);
}


int	parse_for_type(char *str)
{
	int		digits;
	int		i;

	i = 0;
	digits = 0;
	if (str[i] == '-' || str[i] == '+')
		i ++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		i ++;
		digits ++;
	}
	if (str[i] == '\0' && digits > 0)
		return (0);
	else
		return (-1);
}


int	ft_parse(char **argv)
{
	int 	i;

	i = 1;
	while (argv[i])
	{
		if (parse_for_type(argv[i]) < 0)
			return (-1);
		i ++;
	}
	if (parse_for_dup(argv) < 0)
		return (-1);
	return (0);
}

t_stack **store_in_stack(t_stack **a, char **argv)
{
	int	i;

	i = 1;
	a = malloc(sizeof(t_stack **));
	if (!a)
        return (0);
	*a = ft_stknew(ft_atoi(argv[i]));
	i ++;
	while (argv[i])
	{
		ft_stkadd_back(a, ft_stknew(ft_atoi(argv[i])));
        i ++;
    }
	return (a);
}
