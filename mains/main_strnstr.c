#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *haystack = "Hello World!";
	const char *needle = "World";
	
	char *ptr1 = ft_strnstr(haystack, needle, 12);
	char *ptr2 = strnstr(haystack, needle, 12);

	printf("ft_strnstr: %s\n", ptr1);
	printf("strnstr: %s\n", ptr2);

	// Teste com limite menor
	char *ptr3 = ft_strnstr(haystack, needle, 5);
	char *ptr4 = strnstr(haystack, needle, 5);

	printf("ft_strnstr com len=5: %s\n", ptr3);
	printf("strnstr   com len=5: %s\n", ptr4);
		
	return (0);
}
