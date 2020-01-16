/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:15:50 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 10:55:04 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
