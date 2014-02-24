/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 23:31:54 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/16 19:02:34 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	sub = (char*)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!sub)
		return (NULL);
	while ((s[start] != '\0') && (len-- > 0))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
