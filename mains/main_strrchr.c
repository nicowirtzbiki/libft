#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Hello World!";
	char *ptr;

	// Caso 1: procurar 'o' (existe mais de uma vez)
	ptr = ft_strrchr(str, 'o');
	if (ptr)
		printf("Último 'o' encontrado: %s\n", ptr);
	else
		printf("'o' não encontrado!\n");

	// Caso 2: procurar 'H' (primeiro caractere)
	ptr = ft_strrchr(str, 'H');
	if (ptr)
		printf("Último 'H' encontrado: %s\n", ptr);
	else
		printf("'H' não encontrado!\n");

	// Caso 3: procurar um caractere que não existe
	ptr = ft_strrchr(str, 'z');
	if (ptr)
		printf("Último 'z' encontrado: %s\n", ptr);
	else
		printf("'z' não encontrado!\n");

	// Caso 4: procurar '\0'
	ptr = ft_strrchr(str, '\0');
	if (ptr)
		printf("Encontrado '\\0' no fim: \"%s\"\n", ptr);
	else
		printf("'\\0' não encontrado!\n");

	return 0;
}

