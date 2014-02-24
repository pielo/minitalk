/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 23:32:53 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/12 00:25:17 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	i = 0;
	len = ft_strlen(s);
	res = ft_strnew(len + 1);
	while (s[i] != '\0')
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
