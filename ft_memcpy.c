/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:22:13 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/16 18:22:16 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	

	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}
