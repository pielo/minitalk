/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:40:28 by tlloancy          #+#    #+#             */
/*   Updated: 2013/11/30 18:07:47 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s2);
	if (len >= n)
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			if (i > len)
				s1[i] = '\0';
			else
				s1[i] = s2[i];
			i++;
		}
	}
	return (s1);
}
