/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 23:31:30 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/29 22:45:21 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*epure;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	epure = (char*)malloc(sizeof(char) * len + 1);
	if (!epure)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while (i < len)
	{
		epure[j] = s[i];
		i++;
		j++;
	}
	epure[j] = '\0';
	return (epure);
}
