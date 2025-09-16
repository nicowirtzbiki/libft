
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[20] = "Hello World!";
	char str2[20] = "Hello World!";

	// Caso de sobreposição: mover 5 bytes a partir do índice 0 para o índice 2
	ft_memmove(str1 + 2, str1, 5);
	memmove(str2 + 2, str2, 5);

	printf("ft_memmove: %s\n", str1);
	printf("memmove:    %s\n", str2);
	return (0);
}
