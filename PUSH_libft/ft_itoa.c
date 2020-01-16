/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:48:58 by dtai              #+#    #+#             */
/*   Updated: 2019/09/30 16:46:32 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** int data[2] represents a temporary placeholder for the nbr (data[0]) and
** the size of the array (data[1]).
*/

static char	*zero(void)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * 2);
	temp[0] = '0';
	temp[1] = '\0';
	return (temp);
}

char		*ft_itoa(int n)
{
	int		data[2];
	char	*str;

	if (n == 0)
		return (zero());
	data[0] = n;
	data[1] = 1;
	if (n < 0)
		data[1]++;
	while ((data[0] /= 10) != 0)
		data[1]++;
	if (!(str = (char *)malloc(sizeof(char) * (data[1] + 1))))
		return (NULL);
	str[data[1]] = '\0';
	while (n != 0 && data[1]-- >= 0)
	{
		if (n - (n / 10 * 10) >= 0)
			str[data[1]] = (n % 10) + '0';
		else
			str[data[1]] = (n % 10) * -1 + '0';
		n /= 10;
	}
	if (data[1] == 1)
		str[0] = '-';
	return (str);
}

/*
**#include <stdio.h>
**int main(void)
**{
**	printf("%s\n", ft_itoa(2147483647));
**	printf("%s\n", ft_itoa(-2147483648));
**	printf("%s\n", ft_itoa(-1000));
**	printf("%s\n", ft_itoa(0));
**	printf("%s\n", ft_itoa(1000));
**	return (0);
**}
*/
