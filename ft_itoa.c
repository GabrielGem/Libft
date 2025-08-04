/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:28:16 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/08/04 14:41:43 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_numbers(long int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		length++;
	}
	while (n > 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*result;
	int			len;

	num = n;
	len = count_numbers(num);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	if (num < 0)
		num *= -1;
	result[len] = '\0';
	while (len--)
	{
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (&result[0]);
}
//
//#include <stdio.h>
//
//int	main(void)
//{
//	char	*result;
//	int		num;
//
//	num = -2147483648;
//	result = ft_itoa(num);
//	printf("%s", result);
//	return (0);
//}
