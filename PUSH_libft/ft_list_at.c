/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:26:10 by dtai              #+#    #+#             */
/*   Updated: 2019/09/25 18:24:43 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Iterates through the "t_list *" begin_list until reaching index nbr, then
**	returns a "t_list *" value at index "nbr" with index 0 being begin_list.
**	If the list is shorter than size_t, the function returns the last index
**	of the list.
*/

t_list	*ft_list_at(t_list *begin_list, size_t nbr)
{
	size_t	i;

	i = 0;
	while (i < nbr && begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}
