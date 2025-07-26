/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:44:34 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/07/26 18:34:28 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptrs;

	ptrs = (unsigned char *)s;
	while (n--)
	{
		if (*ptrs == (char)c)
			return (ptrs);
		ptrs++;
	}
	return ((void *)0);	
}
