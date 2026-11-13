/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:36:43 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/28 18:37:00 by raaribou         ###   ########.fr       */
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
