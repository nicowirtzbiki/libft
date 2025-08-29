#include <stdio.h>
#include <ctype.h>     // para comparar com isalnum original
#include "libft.h"     // tua função ft_isalnum

int main(void)
{
    char test_chars[] = {'A', 'z', '0', '9', '!', ' ', '\n'};
    int size = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < size; i++)
    {
        char c = test_chars[i];
        int original = isalnum(c);
        int custom = ft_isalnum(c);

        printf("Testando '%c' (ASCII %d): isalnum = %d | ft_isalnum = %d\n",
               (c >= 32 && c <= 126) ? c : '.',  // mostra '.' se não for imprimível
               c,
               original,
               custom);
    }
    return 0;
}
