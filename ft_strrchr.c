#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	if (s[i] == '\0')
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			last = &s[i];
		i++;
	}
	return (last);
}
