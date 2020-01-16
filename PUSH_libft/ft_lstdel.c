/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:22:53 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 16:30:25 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *after;

	temp = *alst;
	while (temp != NULL)
	{
		after = NULL;
		if (temp->next)
			after = temp->next;
		del(temp->content, temp->content_size);
		free(temp);
		temp = after;
	}
	*alst = NULL;
}
