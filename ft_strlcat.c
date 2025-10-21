/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:22:48 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/16 18:22:50 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;
	
	dest_len = 0;
	src_len = 0;
	
	while (dest[dest_len])
	{
		dest_len++;
	}
	while(src[src_len])
	{
		src_len++;
	}
	if (dest_len >= size) //se o dest já ocupa todo o espaço disponível do seu buffer...
	{
		return (size + src_len);
	}
	i = dest_len;
	j = 0;
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
