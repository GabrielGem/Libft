/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:26:48 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/07/31 15:39:04 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*source;

	if (!src)
		return (0);	
	source = src;
	if (size > 0)
	{
		while (--size && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	while (*src)
		src++;
	return (src - source);
}
