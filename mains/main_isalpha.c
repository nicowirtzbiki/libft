#include <stdio.h>
#include "libft.h"   // inclui o header da tua lib

int main(void)
{
    printf("Teste com 'A': %d\n", ft_isalpha('A'));  // deve dar 1
    printf("Teste com 'z': %d\n", ft_isalpha('z'));  // deve dar 1
    printf("Teste com '5': %d\n", ft_isalpha('5'));  // deve dar 0
    printf("Teste com '*': %d\n", ft_isalpha('*'));  // deve dar 0
    return 0;
}
