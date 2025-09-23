
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char dest[10] = "12345";
	char src[] = "abcde";

	printf("Return of function: %zu\n", ft_strlcat(dest, src, 10));
	printf("After concatenation: %s\n", dest);
	return (0);
}
