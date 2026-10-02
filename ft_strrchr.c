#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;
	char	*c_str;

	i = 0;
	c_str = (char *)s;
	if (s[i] == '\0')
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			last = &c_str[i];
		i++;
	}
	return (last);
}
