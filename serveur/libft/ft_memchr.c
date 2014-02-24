/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:24:10 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/16 18:56:02 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = (char*)s;
	while ((i < n) && (tmp[i] != c))
	{
		i++;
	}
	if (tmp[i] != c)
	{
		return (NULL);
	}
	else
	{
		return ((void*)&tmp[i]);
	}
}
