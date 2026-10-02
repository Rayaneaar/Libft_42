#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t bytes)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)ptr;
	i = 0;
	while (i < bytes)
	{
		s[i] = (unsigned char)value;
		i++;
	}
	return (s);
}
