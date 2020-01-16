/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:46:38 by dtai              #+#    #+#             */
/*   Updated: 2019/09/25 18:25:08 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Creates a new element to the end of a linked list.
*/

void	ft_list_push_back(t_list **begin_list, void *content,
		size_t content_size)
{
	t_list *temp;

	temp = *begin_list;
	if (*begin_list)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = ft_lstnew(content, content_size);
	}
	else
		*begin_list = ft_lstnew(content, content_size);
}
