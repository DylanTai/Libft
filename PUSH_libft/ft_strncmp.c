/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:23:13 by dtai              #+#    #+#             */
/*   Updated: 2019/09/18 23:27:40 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0 || (*s1 == '\0' && *s1 == *s2))
		return (0);
	if (*s1 == *s2)
		return (ft_strncmp(++s1, ++s2, --n));
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
