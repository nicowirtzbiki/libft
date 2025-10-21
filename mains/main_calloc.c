#include "libft.h"
#include <stdio.h>

int main(void)
{
    void    *ptr;
    int     *nums;

    ptr = ft_calloc (0,0);
    nums = ft_calloc (5, sizeof(int));

    if (ptr)
        printf("Ponteiro válido retornado!\n");
    else
        printf("Retornou NULL (errado para as regras da 42.\n");
    free(ptr);
    if (nums)
    {
        for (int i = 0; i < 5; i++)
            printf("nums[%d] = %d\n", i, nums[i]);
    }
    else 
    {
        printf("Erro: ft_calloc retornou NULL\n");
    }
    free(nums);
    return (0);
}