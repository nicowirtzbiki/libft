
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("A: %d\n", ft_isascii('A'));     // deve imprimir 1
	printf("127: %d\n", ft_isascii(127));   // deve imprimir 1
	printf("128: %d\n", ft_isascii(128));   // deve imprimir 0
	printf("-1: %d\n", ft_isascii(-1));     // deve imprimir 0
	return(0);
}
