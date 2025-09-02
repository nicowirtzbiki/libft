
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *)b;

	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c; //ptr[i] é igual a *(ptr + i)
		i++;	
	}
		
	return (b);
}
