/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:58:18 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/23 13:46:48 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			word_count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word_count);
}

static int	copy_words(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		arr[j] = ft_substr(s, start, i - start);
		if (!arr[j])
		{
			return (0);
		}
		j++;
	}
	arr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	j;

	if (!s)
		return (NULL);
	size = (count_words(s, c));
	arr = malloc ((size + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!copy_words(s, c, arr))
	{
		j = 0;
		while (arr[j])
		{
			free(arr[j]);
			j++;
		}
		free(arr);
		return (NULL);
	}
	return (arr);
}
