#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c_haystack;

	i = 0;
	c_haystack = (char *)haystack;
	if (needle[i] == '\0')
		return (&c_haystack[i]);
	while (c_haystack[i] && i < len)
	{
		j = 0;
		while ((c_haystack[i + j] == needle[j]) && (i + j < len))
		{
			if (needle[j] == '\0')
				return (&c_haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
