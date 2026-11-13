/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:37:57 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/28 18:38:00 by raaribou         ###   ########.fr       */
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
