
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char str1[20] = "Hello, world!";
	printf("Antes: %s\n", str1);
	ft_memset(str1 + 7, '*', 5);
	printf("Depois (ft_memset): %s\n", str1);
	return (0);
}
