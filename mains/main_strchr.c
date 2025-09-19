

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello World!";
	char *ptr;

	// Caso 1: procurar um caractere que existe
	ptr = ft_strchr(str, 'o');
	if (ptr)
		printf("Encontrado 'o': %s\n", ptr);
	else
	printf("'o' não encontrado!\n");

	// Caso 2: procurar um caractere que não existe
	ptr = ft_strchr(str, 'z');
	if (ptr)
		printf("Encontrado 'z': %s\n", ptr);
	else
	printf("'z' não encontrado!\n");

	// Caso 3: procurar o terminador nulo '\0'
	ptr = ft_strchr(str, '\0');
	if (ptr)
		printf("Encontrado '\\0': posição depois da string -> \"%s\"\n", ptr);
	else
	printf("'\\0' não encontrado!\n");
	return (0);
}
