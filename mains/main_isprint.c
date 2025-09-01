#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char test_chars[] = {'A', ' ', '\n', '~', 127};
	int i = 0;

	while (i < 5)
	{
		if (ft_isprint(test_chars[i]))
			printf("'%c' é imprimível ✅\n", test_chars[i]);
		else
			printf("'%c' NÃO é imprimível ❌ (ASCII %d)\n", test_chars[i], test_chars[i]);
		i++;
	}
	return (0);	
}
