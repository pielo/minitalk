/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:28:57 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/16 18:58:59 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char		*tmp;
	size_t		n;

	n = 0;
	tmp = (char*)b;
	while (n < len)
	{
		tmp[n] = c;
		n++;
	}
	b = tmp;
	return (b);
}
