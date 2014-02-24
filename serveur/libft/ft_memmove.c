/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:24:10 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/16 18:58:42 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*swap;
	size_t	i;
	char	*tmp;

	i = 0;
	swap = (char*)s2;
	tmp = (char*)s1;
	while (i < n)
	{
		tmp[i] = swap[i];
		i++;
	}
	s1 = tmp;
	return (s1);
}
