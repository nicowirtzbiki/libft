
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("test1 - Original function: %d\n", strncmp("Hello", "Helow", 3));
	printf("test1 - Copy function: %d\n", ft_strncmp("Hello", "Helow", 3));
	printf("test2 - Original function: %d\n", strncmp("Hello", "Helow", 5));
	printf("test2 - Copy function: %d\n", ft_strncmp("Hello", "Helow", 5));
	return (0);
}
