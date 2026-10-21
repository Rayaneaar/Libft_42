/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:39:36 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/16 23:47:55 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*haystack;

	i = 0;
	haystack = (unsigned char *)s;
	while (i < n)
	{
		if (haystack[i] == (unsigned char)c)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
