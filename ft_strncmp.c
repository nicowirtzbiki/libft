/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:23:02 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/16 18:23:04 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	
	i = 0;
	while(i < n && str1[i] == str2[i] && str1[i] && str2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return((unsigned char)str1[i] - (unsigned char)str2[i]);
	
}
