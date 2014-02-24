/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:24:10 by tlloancy          #+#    #+#             */
/*   Updated: 2013/11/30 17:51:41 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*swap;
	size_t			i;
	unsigned char	cmp;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char*)s1;
	swap = (unsigned char*)s2;
	cmp = (unsigned char)c;
	while ((i < n) && (swap[i] != cmp))
	{
		tmp[i] = swap[i];
		i++;
	}
	if (ft_strchr(s2, cmp) == NULL)
		return (NULL);
	else
	{
		tmp[i] = swap[i];
		return (&tmp[i + 1]);
	}
}
