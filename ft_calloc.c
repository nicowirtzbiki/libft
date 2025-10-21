/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:07:18 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/21 16:25:19 by nwirtzbi         ###   ########.fr       */
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