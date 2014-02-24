/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 23:35:33 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/11 22:49:18 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	mem = NULL;
	if (size)
	{
		mem = (char*)malloc(sizeof(char) * size);
		if (mem)
			ft_bzero(mem, size);
		else
			return (NULL);
	}
	return ((void*)mem);
}
