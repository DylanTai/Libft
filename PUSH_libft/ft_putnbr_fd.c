/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:05:51 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 15:13:16 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	temp_c;
	long	temp_n;

	temp_n = (long)n;
	if (temp_n < 0)
	{
		write(fd, "-", 1);
		temp_n = temp_n * -1;
	}
	if (temp_n >= 10)
	{
		ft_putnbr_fd((int)(temp_n / 10), fd);
		temp_c = (temp_n % 10) + '0';
		write(fd, &(temp_c), 1);
	}
	if (temp_n < 10)
	{
		temp_c = temp_n + '0';
		write(fd, &(temp_c), 1);
	}
}
