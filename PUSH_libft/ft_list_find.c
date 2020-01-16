/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:17:59 by dtai              #+#    #+#             */
/*   Updated: 2019/09/25 18:24:56 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Iterates through a t_list (0th index being begin_list) and returns the
**	t_list if the content is equal in comparison (using the function that
**	is "cmp"). Otherwise, the function returns NULL.
*/

t_list	*ft_list_find(t_list *begin_list, void *content_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (cmp(begin_list->content, content_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}
