/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:13:10 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 00:25:43 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	prev;
	long	num;
	int		if_neg;

	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if_neg = 1;
	if (*str == '-')
		if_neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		prev = num;
		num = num * 10 + (*str++ - '0');
		if (prev > num)
		{
			if (if_neg == 1)
				return (-1);
			return (0);
		}
	}
	return ((int)(num * if_neg));
}
