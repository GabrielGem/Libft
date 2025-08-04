/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrgarc <gabrgarc@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:01:49 by gabrgarc          #+#    #+#             */
/*   Updated: 2025/08/04 18:33:14 by gabrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	char		c_num;

	num = n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
	{
		c_num = num + '0';
		write(fd, &c_num, 1);
	}
}
