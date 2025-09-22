
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char buffer[10];
	size_t	len;

	len = ft_strlcpy(buffer, "Hello, World!", sizeof(buffer));
	printf("buffer: \"%s\"\n", buffer);
	printf("tamanho de src: %zu\n", len);
	return (0);
}
