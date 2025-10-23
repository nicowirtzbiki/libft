#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    *str1 = "Meu nome é Nicole";
    char    **str2;
    int     i = 0;

    str2 = ft_split(str1, ' ');
    while (str2 [i])
    {
        ft_putstr_fd(str2[i], 1);
        printf("\n");
        i++;
    }
    i = 0;
    while (str2[i])
    {
        // Libera memória de cada palavra
        free(str2[i]);
        i++;
    }
    // Libera o array de ponteiros
    free(str2);
    return (0);
}