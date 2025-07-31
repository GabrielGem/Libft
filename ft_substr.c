/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:22:31 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/07/31 16:08:37 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_str;
	size_t		len_str;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (start >= len_str)
	{
		new_str = (char *)malloc(1);
		*new_str = '\0';
		return (new_str);
	}
	if (len_str - start > len)
		new_str = (char *)malloc(len + 1);
	else
		new_str = (char *)malloc((len_str - start) + 1);	
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}
