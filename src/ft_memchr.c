#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	needle;
	unsigned char	*haystack;

	i = 0;
	needle = (unsigned char)c;
	haystack = (unsigned char *)s;
	while (i < n)
	{
		if (needle == haystack[i])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
