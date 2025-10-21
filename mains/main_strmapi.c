#include "libft.h"
#include <stdio.h>

char to_upper_with_index(unsigned int i, char c)
{
    (void)i; // não usar o indice
    return ft_toupper(c);
}

int main(void)
{
    char *s = "nicole";
    char *res;

    res = ft_strmapi(s, to_upper_with_index);
    printf("Original: %s\n", s);
    printf("Nova:     %s\n", res);

    free(res);
    return 0;
}