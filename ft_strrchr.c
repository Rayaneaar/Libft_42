/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:08:15 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/15 18:49:38 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*haystack;
	unsigned char	*last;

	i = 0;
	last = NULL;
	haystack = (unsigned char *)s;
	while (haystack[i])
	{
		if (haystack[i] == c)
			last = &haystack[i];
		i++;
	}
	last = &haystack[i];
	return ((char *)last);
}
