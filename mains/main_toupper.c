#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char c1 = 'a';
	char c2 = 'z';
	char c3 = 'B';
	char c4 = '!';

	printf("%c -> %c\n", c1, ft_toupper(c1));
	printf("%c -> %c\n", c2, ft_toupper(c2));
	printf("%c -> %c\n", c3, ft_toupper(c3));
	printf("%c -> %c\n", c4, ft_toupper(c4));
	return (0);
}
