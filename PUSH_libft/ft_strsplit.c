/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:43:12 by dtai              #+#    #+#             */
/*   Updated: 2019/09/19 20:53:27 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(const char *str, char c, int words)
{
	int	found_word;

	found_word = 0;
	while (*str == c)
		str++;
	while (*str != c && *str != '\0')
	{
		if (!found_word)
			found_word++;
		str++;
	}
	words += found_word;
	if (*str == '\0')
		return (words);
	return (num_words(str, c, words));
}

static int	split_words(char const *str, char c, char **all_words, int size)
{
	int		word_size;
	int		word_size_temp;
	char	*temp;

	if (size == 0)
		return (1);
	while (*str == c)
		str++;
	word_size = 0;
	while (*str != c && *str != '\0')
	{
		word_size++;
		str++;
	}
	temp = (char *)malloc(sizeof(char) * (word_size + 1));
	if (!temp)
		return (0);
	temp[word_size] = '\0';
	word_size_temp = word_size;
	while (--word_size_temp >= 0)
		temp[word_size_temp] = *(--str);
	*(all_words++) = temp;
	return (split_words(str + word_size, c, all_words, --size));
}

static void	free_all_words(char **all_words, int num_words)
{
	int i;

	i = 0;
	while (i < num_words)
	{
		if (all_words[i])
			free(all_words[i]);
		i++;
	}
	all_words = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**all_words;
	int		size;

	if (!s)
		return (NULL);
	all_words = (char **)malloc(sizeof(char *) *
			((size = num_words(s, c, 0)) + 1));
	if (!all_words)
		return (NULL);
	all_words[size] = NULL;
	if (split_words(s, c, all_words, size))
		return (all_words);
	free_all_words(all_words, num_words(s, c, 0));
	return (NULL);
}

/*
**#include <stdio.h>
**void print_split(char *split)
**{
**	char **array = ft_strsplit(split, ' ');
**	printf("number of elements: %d\n", num_words(split, ' ', 0));
**	while (*array != NULL)
**		printf("%s\n", *array++);
**	printf("\n");
**}
**int main(void)
**{
**	print_split("      split       this for   me  !       ");
**	print_split("                  olol");
**	print_split("olol                     ");
**	return (0);
**}
*/
