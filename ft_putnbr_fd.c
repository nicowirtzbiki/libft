/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:14:18 by nico              #+#    #+#             */
/*   Updated: 2025/10/20 22:43:49 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    num;
    char    result;

    num = n;
    if (num < 0)
    {
        write(fd, "-", 1);
        num = -num;
    }
    if (num >= 10)
    {
        ft_putnbr_fd(num / 10, fd);
    }
    result = (num % 10) + '0';
    write(fd, &result, 1);
}