/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:39:22 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 15:06:58 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	temp_c;
	long	temp_n;

	temp_n = (long)n;
	if (temp_n < 0)
	{
		write(1, "-", 1);
		temp_n = temp_n * -1;
	}
	if (temp_n >= 10)
	{
		ft_putnbr((int)(temp_n / 10));
		temp_c = (temp_n % 10) + '0';
		write(1, &(temp_c), 1);
	}
	if (temp_n < 10)
	{
		temp_c = temp_n + '0';
		write(1, &(temp_c), 1);
	}
}
