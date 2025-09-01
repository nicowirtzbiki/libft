
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c1 = 'A';
	char c2 = 'Z';
	char c3 = 'b';
	char c4 = '!';

	printf("%c -> %c\n", c1, ft_tolower(c1));
	printf("%c -> %c\n", c2, ft_tolower(c2));
	printf("%c -> %c\n", c3, ft_tolower(c3));
	printf("%c -> %c\n", c4, ft_tolower(c4));
	return (0);
}
