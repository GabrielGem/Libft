/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:00:04 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/08/07 18:52:06 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c, size_t wc)
{
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			wc++;
		s++;
	}
	return (wc);
}

static void	ft_free_problems(char **str_of_str, size_t n_free)
{
	while (n_free--)
		free(str_of_str[n_free]);
	free(str_of_str);
}

static void	ft_aux_split(char **str, char const *s, char c, size_t words)
{
	char	*start;
	char	*end;
	size_t	ok_alloc;

	start = (char *)s;
	ok_alloc = 0;
	while (ok_alloc < words)
	{
		while (*start == c)
			start++;
		end = start;
		while (*end != c && *end != '\0')
			end++;
		*str = malloc(end - start + 1);
		if (!*str)
			ft_free_problems(str, ok_alloc);
		ok_alloc++;
		ft_strlcpy(*str, start, end - start + 1);
		str++;
		start = end;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**strgs;

	if (!s)
		return (NULL);
	n_words = ft_word_count(s, c, 0);
	strgs = malloc((n_words + 1) * sizeof(char *));
	if (!strgs)
		return (NULL);
	strgs[n_words] = NULL;
	ft_aux_split(strgs, s, c, n_words);
	return (strgs);
}
