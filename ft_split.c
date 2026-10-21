/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:48:21 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/19 22:43:55 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static void	ft_free(char **arr, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static size_t	ft_count_words(char *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((!ft_is_sep(str[i], sep) && (i == 0 || ft_is_sep(str[i - 1], sep))))
			words++;
		i++;
	}
	return (words);
}

static char	*ft_get_word(char const *s, size_t *i, char c)
{
	size_t	len;
	size_t	start;

	len = 0;
	start = 0;
	while (ft_is_sep(s[*i], c))
		(*i)++;
	start = *i;
	while (s[*i] && !ft_is_sep(s[*i], c))
		(*i)++;
	len = *i - start;
	return (ft_substr(s, start, len));
}

char	**ft_split(char *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	index;
	size_t	words;

	i = 0;
	index = 0;
	words = ft_count_words(s, c);
	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	while (index < words)
	{
		arr[index] = ft_get_word(s, &i, c);
		if (!arr[index])
			return (ft_free(arr, index), NULL);
		index++;
	}
	arr[index] = NULL;
	return (arr);
}
