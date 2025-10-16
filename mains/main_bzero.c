#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello World!";
	char str2[] = "Hello World!";

	printf("Antes str1: %s\n", str1);
	printf("Antes str2: %s\n", str2);

	ft_bzero(str1 + 5, 3); //usando o ft_bzero
	bzero(str2 + 5, 3); //usando o bzero da libc para comparar

	printf("Depois str1 com ft_bzero: %s\n", str1);
	printf("Depois str2 com bzero: %s\n", str2);

	printf("Verificando bytes da str1:\n");
	for (int i = 0; i < 12; i++)
	{
		unsigned char c = (unsigned char)str1[i];
		if (c == '\0')
			printf("[%2d] 00 (.)\n", i);
		else
			printf("[%2d] %02x (%c)\n", i, c, c);
	}

	return (0);
}
