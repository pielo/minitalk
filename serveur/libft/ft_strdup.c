/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:15:11 by tlloancy          #+#    #+#             */
/*   Updated: 2014/02/06 01:21:03 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}
