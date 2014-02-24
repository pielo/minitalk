/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:33:27 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/29 22:43:43 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	len = ft_strlen(s);
	tmp = (char *) &s[len];
	while (*tmp != *s && c != *tmp)
	{
		tmp--;
	}
	if (*tmp == (char) c)
		return (tmp);
	return (NULL);
}
