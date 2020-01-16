/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:26:46 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 21:06:56 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del_contents(void *vdptr, size_t size)
{
	(void)size;
	free(vdptr);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_begin;
	t_list	*copy;

	if (!lst)
		return (NULL);
	new_begin = f(ft_lstnew(lst->content, lst->content_size));
	if (!new_begin)
		return (NULL);
	copy = new_begin;
	lst = lst->next;
	while (lst)
	{
		copy->next = f(ft_lstnew(lst->content, lst->content_size));
		if (!(copy->next))
		{
			ft_lstdel(&new_begin, &del_contents);
			return (NULL);
		}
		copy = copy->next;
		lst = lst->next;
	}
	return (new_begin);
}
