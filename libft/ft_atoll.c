long long	ft_atoll(const char *nptr)
{
	int			i;
	long long	n;
	int			sign;

	i = 0;
	sign = 1;
	n = 0;
	while (nptr[i] && ft_isspace(nptr[i]) != 0)
		i ++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i ++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = (n * 10) + (nptr[i] - 48);
		i ++;
	}
	return (sign * n);
}