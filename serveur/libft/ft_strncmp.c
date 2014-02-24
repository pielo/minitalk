/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:09:53 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/29 22:41:19 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	i = 0;
	tmp = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	if (*tmp2 == '\0')
		return (*tmp);
	else
	{
		while (((tmp2[i] != '\0') && (i < n)) || ((tmp[i] != '\0') && (i < n)))
		{
			if (tmp2[i] == tmp[i])
				i++;
			else
				return (tmp[i] - tmp2[i]);
		}
		if (tmp[i] == '\0' && tmp2[i] != '\0')
			return (tmp2[i]);
		else if (tmp2[i] == '\0' && tmp[i] != '\0')
			return (tmp[i]);
		return (0);
	}
}
