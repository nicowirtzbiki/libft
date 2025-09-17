
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Helzo";

	printf("Comparando str1 e str2 (iguais): %d\n", ft_memcmp(str1, str2, 5));
	printf("Comparando str1 e str3 (diferentes): %d\n", ft_memcmp(str1, str3, 5));
	printf("Comparando str1 e str3 nos 3 primeiros bytes: %d\n", ft_memcmp(str1, str3, 3));
	return (0);
}
