/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:09:53 by tlloancy          #+#    #+#             */
/*   Updated: 2014/02/08 20:40:09 by mlanglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_search(const char *s1, const char *s2, size_t n, size_t i)
{
	size_t	j;

	j = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[j])
		{
			while ((s2[j] != '\0') && ((s1[i] == s2[j])
						|| s1[i + 1] == s2[j + 1]))
			{
				j++;
				i++;
			}
			if (ft_strlen(s2) == j)
				return ((char*)&s1[i - j]);
			else if (n == ft_strlen(s2))
				i = i - j + n;
			else
				i = i - j;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	if (ft_strlen(s2) == 0)
		return (NULL);
	if (ft_strlen(s1) == 1)
	{
		if (ft_strchr(s1, s2[i]))
			return ((char*)s1);
		else
			return (NULL);
	}
	else if (ft_strlen(s1) > 1)
	{
		return (ft_search(s1, s2, n, i));
		if (ft_strlen(s2) == j)
			return ((char*)&s1[i - j]);
	}
	return (NULL);
}
