#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	if (!dest && !src)
        	return NULL;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;

	if (d > s) // copiar de trás pra frente
	{
		size_t i = n;       // começamos com i = n
		while (i > 0)
		{
			i--;            // decrementa primeiro
			d[i] = s[i];    // copia o byte
		}
	}
	else // copiar normalmente da frente pra trás
	{
		size_t i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
