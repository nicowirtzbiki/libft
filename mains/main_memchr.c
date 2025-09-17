#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello World!";
	char *ptr;

	ptr = memchr(str, 'o', strlen(str));
	if (ptr != NULL)
		printf("Encontrado: %s\n", ptr);
	else
		printf("Não encontrado!\n");
	return (0);
}
