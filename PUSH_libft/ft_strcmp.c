/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:23:13 by dtai              #+#    #+#             */
/*   Updated: 2019/09/18 23:25:02 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 == '\0' && *s1 == *s2)
		return (0);
	if ((unsigned char)*s1 == (unsigned char)*s2)
		return (ft_strcmp(++s1, ++s2));
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
