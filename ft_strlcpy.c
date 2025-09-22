
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while(src[src_len])
	{
		src_len++;
	}
	if (size != 0)
	{
		i = 0;
		while(i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
