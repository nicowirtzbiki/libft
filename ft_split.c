/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:58:18 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/21 19:40:21 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t count_words(char const *s, char c)
{
    size_t i;
    size_t word_count;

    word_count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            word_count++;
            while(s[i] && s[i] != c)
                i++;
        }
    }
    return (word_count);
}



char	**ft_split(char const *s, char c)
{
    size_t  word_count;
    char    **arr;

    word_count = count_words(s, c);
    arr = malloc ((word_count + 1) * sizeof(char *));


}
