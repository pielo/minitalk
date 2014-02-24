/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 23:33:21 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/16 19:01:05 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	res = ft_strnew(len + 1);
	while (s[i] != '\0')
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	return (res);
}
