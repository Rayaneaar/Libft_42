#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
size_t	ft_strlcpy(char *dst, char *src, size_t dst_size)
{
	size_t	i;
	int		src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dst_size > 0)
	{
		while (i < dst_size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (src_len);
}
