/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:18:08 by dtai              #+#    #+#             */
/*   Updated: 2019/09/18 22:47:12 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s1_itr;
	size_t	s2_itr;

	if (!n)
		return (s1);
	s1_itr = 0;
	s2_itr = 0;
	while (s1[s1_itr] != '\0')
		s1_itr++;
	while (s2[s2_itr] != '\0' && n--)
		s1[s1_itr++] = s2[s2_itr++];
	s1[s1_itr] = '\0';
	return (s1);
}
