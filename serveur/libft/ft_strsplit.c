/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olysogub <olysogub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 11:34:22 by olysogub          #+#    #+#             */
/*   Updated: 2013/12/29 22:44:17 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		st_nbrwords(char const *s, char c)
{
	int			i;
	int			nb_words;
	int			new_word;

	i = 0;
	nb_words = 0;
	new_word = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && new_word)
		{
			new_word = 0;
			nb_words++;
		}
		else if (!new_word && (s[i] != c))
			new_word = 1;
		i++;
	}
	if (new_word)
	{
		nb_words++;
	}
	return (nb_words);
}

static char		*st_createword(char const *s, char c, int word_index)
{
	int			i;
	int			nb_words;
	int			new_word;

	i = 0;
	nb_words = 0;
	new_word = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && new_word)
		{
			if (nb_words == word_index)
				return (ft_strsub(s, (i - new_word), (i - (i - new_word))));
			new_word = 0;
			nb_words++;
		}
		new_word = (s[i] != c) ? (new_word + 1) : new_word;
		i++;
	}
	return (ft_strsub(s, (i - new_word), (i - (i - new_word))));
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			i;
	int			nb_words;

	if (!s)
		return (NULL);
	i = 0;
	nb_words = st_nbrwords(s, c);
	tab = ft_memalloc((nb_words + 1) * sizeof(char*));
	if (!tab)
		return (NULL);
	while (i < nb_words)
	{
		tab[i] = st_createword(s, c, i);
		i++;
	}
	return (tab);
}
