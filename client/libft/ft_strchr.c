/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:54:53 by mlanglet          #+#    #+#             */
/*   Updated: 2014/02/09 18:02:46 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	i = 0;
	ch = c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
