/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:43:14 by dtai              #+#    #+#             */
/*   Updated: 2019/09/18 23:22:02 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	hay_itr;
	size_t	nee_itr;

	if (*needle == '\0')
		return ((char *)haystack);
	hay_itr = 0;
	while (haystack[hay_itr] != '\0' && hay_itr < n)
	{
		if (haystack[hay_itr] == *needle)
		{
			nee_itr = 0;
			while (needle[nee_itr] != '\0' && haystack[hay_itr + nee_itr]
					== needle[nee_itr] && hay_itr + nee_itr < n)
				nee_itr++;
			if (needle[nee_itr] == '\0')
				return ((char *)haystack + hay_itr);
		}
		hay_itr++;
	}
	return (NULL);
}
