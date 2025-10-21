#include "libft.h"
#include <stdio.h>

void to_uppercase(unsigned int i, char *c)
{
    (void)i; // ignorar o indice
    *c = ft_toupper(*c);
}

int main(void)
{
    char string[] = "nicole";

    printf("Antes: %s\n", string);

    ft_striteri(string, to_uppercase);

    printf("Depois: %s\n", string);

    return 0;
}