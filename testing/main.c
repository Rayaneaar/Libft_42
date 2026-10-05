#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len);

int	main(void)
{
	char	name[] = "hello world";

	ft_memmove(name + 4, name, 5);
	printf("%s\n", (char *)name);
	return (0);
}
