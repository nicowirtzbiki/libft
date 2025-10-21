#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *s1 = "   ---Hello World---   ";
	char *set = " -";
	char *trimmed = ft_strtrim(s1, set);

	printf("Antes: \"%s\"\n", s1);
	printf("Depois: \"%s\"\n", trimmed);

	free(trimmed);
	return (0);
}