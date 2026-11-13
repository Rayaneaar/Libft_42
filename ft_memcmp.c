/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:36:49 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/28 18:37:00 by raaribou         ###   ########.fr       */
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
	return (0);
}
