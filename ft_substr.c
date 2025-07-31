/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:22:31 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/07/31 17:12:10 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_str;
	size_t		len_str;
	size_t		i;

	if (!s || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	len_str = ft_strlen(s);
	i = len_str - start;
	if (i > len)
		i = len;
	new_str = (char *)malloc(i + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}
