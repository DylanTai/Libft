/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_torevcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:53:41 by dtai              #+#    #+#             */
/*   Updated: 2019/09/25 18:23:52 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Lowercases uppercase letters, uppercases lowercase letters, and doesn't
**	change any other characters, then returns that value.
*/

int	ft_torevcase(int c)
{
	return ((c >= 'a' && c <= 'z') ? ft_toupper(c) : ft_tolower(c));
}
