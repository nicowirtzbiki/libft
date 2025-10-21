/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:08:41 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/21 19:46:18 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//strdup
//substr

char	*ft_strdup(const char *s1)
{
	char	*strcopy;
	int		i;
	int		len;

	len = ft_strlen(s1);
	strcopy = malloc((len + 1) * sizeof(char));
	if (!strcopy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strcopy[i] = s1[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}
