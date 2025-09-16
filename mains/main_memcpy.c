#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src1[] = "Hello World!";
    char dest1[20];
    char dest2[20];

    // usando ft_memcpy
    ft_memcpy(dest1, src1, 12);
    dest1[12] = '\0'; // garantir o fim da string

    // usando memcpy da libc
    memcpy(dest2, src1, 12);
    dest2[12] = '\0';

    printf("ft_memcpy: %s\n", dest1);
    printf("memcpy:   %s\n", dest2);

    return 0;
}


