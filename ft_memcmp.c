/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:01:57 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/18 19:09:21 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem_1;
	unsigned char	*mem_2;
	size_t			i;

	mem_1 = (unsigned char *)s1;
	mem_2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (mem_1[i] != mem_2[i])
			return (mem_1[i] - mem_2[i]);
		i++;
	}
	if (n <= 0)
		return (0);
	return (0);
}
