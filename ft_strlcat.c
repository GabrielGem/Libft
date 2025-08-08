/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:49:35 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/08/07 18:14:35 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	if (size <= d_len)
		return (s_len + size);
	dst += d_len;
	size -= (d_len + 1);
	while (size-- && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (d_len + s_len);
}
