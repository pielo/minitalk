/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:09:53 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/29 22:39:40 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	if (*s2 == '\0')
		return (*s1);
	else
	{
		while (s2[i] != '\0' || s1[i] != '\0')
		{
			if (s2[i] == s1[i])
			{
				i++;
			}
			else
			{
				return ((int)s1[i] - (int)s2[i]);
			}
		}
		if (s1[i] == '\0' && s2[i] != '\0')
			return (s2[i]);
		else if (s2[i] == '\0' && s1[i] != '\0')
			return (s1[i]);
	}
	return (0);
}
