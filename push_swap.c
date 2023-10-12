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

int	main(int argc, char **argv)
{
	//t_list	**a;
	//t_list	**b;	

	/*if (argc == 2)
		write (1, argv[1], ft_strlen(argv[1]));
	else if (argc > 2)
	*/
	if (argc < 2)
		return (0);
		//write (1, "Error\n", 6);
	else //(argc >= 2)
	{
		if (ft_parse(argv) < 0)
			write (1, "Error\n", 6);
		else
		{
			while (*argv)
			{
				write (1, *argv, ft_strlen(*argv));
				write (1, "\n", 1);
				argv ++;
			}
		}
	}
	return (0);
}
