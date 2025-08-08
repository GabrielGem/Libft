/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:22:31 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/08/08 12:58:16 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_str;
	size_t		len_str;
	size_t		copyable_size;

	if (!s || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	len_str = ft_strlen(s);
	copyable_size = len_str - start;
	if (copyable_size > len)
		copyable_size = len;
	new_str = (char *)malloc(copyable_size + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, copyable_size + 1);
	return (new_str);
}
