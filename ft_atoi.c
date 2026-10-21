/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:34:51 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/18 22:12:11 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign *= -1;
	}
	while (ft_isdigit(nptr[i]))
	{
		if (result > ((9223372036854775807 - (nptr[i] - '0')) / 10))
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		result = result * 10 + (nptr[i++] - '0');
	}
	return (sign * result);
}
