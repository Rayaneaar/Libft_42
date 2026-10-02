#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	buf[10];

	// Step 1: fill everything with a non-zero marker so you can
	// tell "zeroed" apart from "was already zero"
	ft_memset(buf, 0xFF, sizeof(buf));
	printf("Before: ");
	for (int i = 0; i < 10; i++)
		printf("%02X ", buf[i]);
	printf("\n");
	// Step 2: call the function you're testing
	ft_bzero(buf, 4);
	printf("After dyalna:  ");
	for (int i = 0; i < 10; i++)
		printf("%02X ", buf[i]);
	printf("\n");
	bzero(buf, 5);
	printf("After dyalhom:  ");
	for (int i = 0; i < 10; i++)
		printf("%02X ", buf[i]);
	printf("\n");
	return (0);
}
