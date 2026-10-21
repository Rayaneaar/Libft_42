/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 08:21:04 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/20 09:16:47 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(int n)
{
	int		len;
	long	nbr;

	len = 1;
	nbr = n;
	while (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int i)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = i;
	len = ft_get_len(nbr) + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[--len] = '\0';
	while (nbr >= 10)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	str[--len] = nbr + '0';
	return (str);
}
