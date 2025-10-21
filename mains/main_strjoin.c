#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *joined;

	joined = ft_strjoin("Hello", "World");
	printf("Teste 1: %s\n", joined);
	free(joined);

	joined = ft_strjoin("42", " Porto");
	printf("Teste 2: %s\n", joined);
	free(joined);

	joined = ft_strjoin("", "EmptyLeft");
	printf("Teste 3: %s\n", joined);
	free(joined);

	joined = ft_strjoin("RightEmpty", "");
	printf("Teste 4: %s\n", joined);
	free(joined);

}