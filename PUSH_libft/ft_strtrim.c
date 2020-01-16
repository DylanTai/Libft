/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:09:33 by dtai              #+#    #+#             */
/*   Updated: 2019/09/24 21:49:19 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(const char *s)
{
	size_t	itr;

	itr = 0;
	while (s[itr] == ' ' || s[itr] == '\n' || s[itr] == '\t')
		itr++;
	return (itr);
}

static size_t	find_end(const char *s, size_t start)
{
	size_t	itr;

	itr = start - 1;
	while (s[++itr] != '\0')
		continue ;
	while (s[--itr] == ' ' || s[itr] == '\n' || s[itr] == '\t')
		continue ;
	return (++itr);
}

char			*ft_strtrim(const char *s)
{
	size_t	start;
	size_t	end;
	size_t	itr;
	char	*temp;

	if (!s)
		return (NULL);
	start = find_start(s);
	if (s[start] == '\0')
	{
		temp = (char *)malloc(sizeof(char) * 1);
		temp[0] = '\0';
		return (temp);
	}
	end = find_end(s, start);
	temp = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!temp)
		return (NULL);
	itr = -1;
	while (++itr + start < end)
		temp[itr] = s[itr + start];
	temp[itr] = '\0';
	return (temp);
}
