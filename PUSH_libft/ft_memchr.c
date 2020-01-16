/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:30:10 by dtai              #+#    #+#             */
/*   Updated: 2019/09/18 18:13:19 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t_s;

	t_s = (unsigned char *)s;
	while (n--)
	{
		if (*t_s == (unsigned char)c)
			return (t_s);
		t_s++;
	}
	return (NULL);
}
