/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:49:40 by dtai              #+#    #+#             */
/*   Updated: 2019/09/18 19:53:51 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;
	unsigned char	*t_dst_end;
	unsigned char	*t_src_end;

	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	if (!t_dst && !t_src)
		return (dst);
	if (t_dst < t_src)
	{
		while (len--)
			*t_dst++ = *t_src++;
	}
	else
	{
		t_dst_end = t_dst + len - 1;
		t_src_end = t_src + len - 1;
		while (len--)
			*t_dst_end-- = *t_src_end--;
	}
	return (dst);
}
