/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:24:10 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/16 18:56:21 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	i = 0;
	tmp = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	while (i < n)
	{
		if (tmp2[i] == tmp[i])
		{
			i++;
		}
		else
		{
			return (tmp[i] - tmp2[i]);
		}
	}
	return (0);
}
