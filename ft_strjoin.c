/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:57:18 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/21 16:28:44 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *newstr;
    size_t  len;
    size_t  i;
    size_t  j;

    if (!s1 || !s2)
        return (NULL);

    len = ft_strlen(s1) + ft_strlen(s2);
    newstr = malloc(len + 1);
    if (!newstr)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        newstr[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        newstr[i + j] = s2[j];
        j++; 
    }
    newstr[i + j] = '\0';
    return (newstr);
}