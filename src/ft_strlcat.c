#include "libft.h"

size_t	ft_strlcat(const char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	char	*dest;

	i = 0;
	dest = (char *)dst;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	if (dst_size == 0)
		return (src_len);
	if (dst_len >= dst_size)
		return (dst_size + src_len);
	while ((i < dst_size - dst_len - 1) && src[i])
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
