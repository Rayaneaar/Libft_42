#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*v;

	i = 0;
	v = (char *)s;
	if (v[i] == '\0')
		return (NULL);
	while (v[i])
	{
		if (v[i] == c)
			return (&v[i]);
		i++;
	}
	return (&v[i]);
}
