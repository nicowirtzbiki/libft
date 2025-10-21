#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *original = "Hello World!";
    char *sub;

    // Exemplo 1: pegar "World"
    sub = ft_substr(original, 6, 5);
    printf("Substr 1: %s\n", sub);
    free(sub);

    // Exemplo 2: pegar "Hello"
    sub = ft_substr(original, 0, 5);
    printf("Substr 2: %s\n", sub);
    free(sub);

    // Exemplo 3: start além do tamanho da string → retorna string vazia
    sub = ft_substr(original, 50, 5);
    printf("Substr 3: '%s'\n", sub);
    free(sub);

    // Exemplo 4: len maior que o restante da string
    sub = ft_substr(original, 6, 50);
    printf("Substr 4: %s\n", sub);
    free(sub);
    return (0);
}