

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello World!";
	char str2[] = "Hello World!";

	ft_bzero(str1 + 5, 3); //usando o ft_bzero
	bzero(str2 + 5, 3); //usando o bzero da libc para comparar

	printf("ft_bzero: %s\n", str1);
	printf("bzero: %s\n", str2);

	//verificando os bytes manualmente
	for (int i = 0; i < 12; i++)
		printf("%02x ", (unsigned char)str1[i]);
	printf("\n");

	return (0);
}
