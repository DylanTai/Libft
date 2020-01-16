/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:27:01 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 11:02:23 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*temp;
	size_t	i;

	temp = (char *)malloc(sizeof(char) * (size + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (i <= size)
		temp[i++] = '\0';
	return (temp);
}
