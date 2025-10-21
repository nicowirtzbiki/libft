/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:53:48 by nico              #+#    #+#             */
/*   Updated: 2025/10/21 12:21:39 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    size_t  len;
    char *newstr;

    if (!s || !f)
        return (NULL);

    len = ft_strlen(s) + 1;
    newstr = malloc (len);
    if (!newstr)
        return (NULL);

    i = 0;
    while(s[i])
    {
        newstr[i] = f(i, s[i]);
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}