/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:12:17 by dtai              #+#    #+#             */
/*   Updated: 2019/09/18 22:47:30 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (!len)
		return (dst);
	while (src[i] != '\0' && len)
	{
		len--;
		dst[i] = src[i];
		i++;
	}
	while (len--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
