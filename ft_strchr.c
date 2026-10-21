/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:52:32 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/15 14:30:50 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*haystack;

	i = 0;
	haystack = (char *)s;
	while (haystack[i])
	{
		if (haystack[i] == c)
			return (&haystack[i]);
		i++;
	}
	if (c == '\0')
		return (&haystack[i]);
	return (NULL);
}
