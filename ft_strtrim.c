/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:42:18 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/19 01:52:44 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start])
	{
		if (!ft_check(set, s1[start]))
			break ;
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end > 0 && end > start)
	{
		if (!ft_check(set, s1[end]))
			break ;
		end--;
	}
	trimmed = ft_substr(s1, start, (end - start) + 1);
	return (trimmed);
}
