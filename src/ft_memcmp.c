#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*mem_1;
	unsigned char	*mem_2;

	i = 0;
	mem_1 = (unsigned char *)s1;
	mem_2 = (unsigned char *)s2;
	while (i < n)
	{
		if (mem_1[i] == mem_2[i])
			return (mem_1[i] - mem_2[i]);
		i++;
	}
	return (0);
}
