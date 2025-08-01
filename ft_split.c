/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:00:04 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/08/01 18:43:15 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
	size_t	wc;

	wc = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			wc++;
		s++;
	}
	return (wc);
}

char	**ft_slipt(char const *s, char c)
{
	size_t	n_words;
	char	**strgs;
	char	*start;
	char	*end;

	if (!s)
		return (NULL);
	n_word = ft_word_count(s, c);
	strgs = malloc((n_word + 1) * sizeof(char *));
	start = (char *)s;
	while (n_word--)
	{
		while (*start == c)
			start++;
		end = start;
		while (*end != c && *end != '\0')
			end++;
		**strgs = malloc(end - start + 1);
		if (!*strgs)
			return (NULL);
		*strgs = ft_substr(s, start, end - start);
		*strgs++;
		start = end;
	}
	*strgs = '\0';
	return (&strgs[0]);
}
