#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *original = "Olá!";
    char *copy;

    copy = ft_strdup(original);

    if (!copy)
    {
        printf("Erro: malloc falhou!\n");
        return (1);
    }

    printf("String original: \"%s\"\n", original);
    printf("String copiada:  \"%s\"\n", copy);

    // Verifica se os ponteiros são diferentes (devem ser!)
    if (original == copy)
        printf("Erro: apontam para o mesmo endereço!\n");
    else
        printf("Cópia feita em novo endereço de memória.\n");

    // Mostra os endereços de memória pra ver a diferença
    printf("Endereço original: %p\n", (void *)original);
    printf("Endereço cópia:    %p\n", (void *)copy);

    free(copy);

    return (0);
}