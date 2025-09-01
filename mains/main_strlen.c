
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*str1 = "Hello, 42!";
	char	*str2 = "";
	char	*str3 = "Nicole";

	printf("Len of '%s' = %zu\n", str1, ft_strlen(str1));
	printf("Len of '%s' = %zu\n", str2, ft_strlen(str2));
	printf("Len of '%s' = %zu\n", str3, ft_strlen(str3));
	return (0);
}
