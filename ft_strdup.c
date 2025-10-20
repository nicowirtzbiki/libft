/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:08:41 by nico              #+#    #+#             */
/*   Updated: 2025/10/20 14:54:44 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *strcopy;
    int     i;
    int     len;

    len = ft_strlen(s1);
    strcopy = malloc((len + 1) * sizeof(char));
    if (!strcopy)
        return (NULL);
    i = 0;
    while(i < len)
    {
        strcopy[i] = s1[i];
        i++;
    }
    strcopy[i] = '\0';
    return (strcopy);
}