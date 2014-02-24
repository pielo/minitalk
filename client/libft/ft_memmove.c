/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:32:47 by mlanglet          #+#    #+#             */
/*   Updated: 2014/02/09 18:04:47 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p;

	if (!n)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	p = dest + n;
	src += n;
	while (n--)
		*--p = *(char*)--src;
	return (dest);
}
