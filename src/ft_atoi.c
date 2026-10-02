#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		if (result > (9223372036854775807 - (str[i] - '0')) / 10 && sign == 1)
			return (-1);
		else if (result > (9223372036854775807 - (str[i] - '0')) / 10 && sign ==
			-1)
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
