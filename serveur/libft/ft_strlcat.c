/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:25:17 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/04 21:21:43 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + (ft_strlen(src)));
	i = 0;
	len = ft_strlen(dst);
	while (src[i] && (len + i) < (size - 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
