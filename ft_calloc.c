/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:07:18 by nico              #+#    #+#             */
/*   Updated: 2025/10/20 12:28:12 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_calloc(size_t count, size_t size)
{
    char    *ptr;
    size_t  total;

    if (count != 0 && size > SIZE_MAX / count)
    {
        return (NULL);
    }
    total = size * count;
    if (count == 0 || size == 0)
    {
        total = 1;
    }
    ptr = malloc (total);
    if (!ptr)
        return (NULL);
    ft_bzero (ptr, total);
    return (ptr);
}