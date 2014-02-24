/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:09:53 by tlloancy          #+#    #+#             */
/*   Updated: 2014/02/08 20:40:37 by mlanglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_search(const char *s1, const char *s2, int i, int j)
{
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
		{
			while ((s2[j] != '\0') && ((s1[i] == s2[j])
						|| s1[i + 1] == s2[j + 1]))
			{
				i++;
				j++;
			}
		}
		else
		{
				i++;
				j = 0;
		}
	if ((int)ft_strlen(s2) == j)
		return ((char*)&s1[i - j]);
	}
	return (NULL);
}

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		len;
	int		j;
	int		len2;

	i = 0;
	j = 0;
	len = ft_strlen(s2);
	len2 = ft_strlen(s1);
	if (*s2 == '\0')
	{
		return ((char*)s1);
	}
	else if (len2 == 1)
	{
		if (ft_strchr(s1, s2[i]))
			return ((char*)s1);
		else
			return (NULL);
	}
	else if (len2 > 1)
		return (ft_search(s1, s2, i, j));
	return (NULL);
}
