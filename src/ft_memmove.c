#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int len)
{
	int				i;
	unsigned char	*dst;
	unsigned char	*source;

	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (dst == source)
		return (dst);
	if (dst < source)
	{
		while (source[i])
		{
			dst[i] = source[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i)
		{
			dst[i] = source[i];
			i--;
		}
	}
	return (dest);
}
