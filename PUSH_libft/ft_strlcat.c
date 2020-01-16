/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:36:03 by dtai              #+#    #+#             */
/*   Updated: 2019/09/17 17:51:03 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	output;
	size_t	dlen;

	output = ft_strlen(src);
	if (dstsize == 0)
		return (output);
	dlen = ft_strlen(dst);
	output += dlen > dstsize ? dstsize : dlen;
	while (dlen < dstsize - 1 && *src)
		dst[dlen++] = *src++;
	dst[dlen] = '\0';
	return (output);
}
