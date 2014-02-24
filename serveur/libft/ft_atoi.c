/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 21:38:44 by tlloancy          #+#    #+#             */
/*   Updated: 2013/11/30 17:42:44 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i] >= '\t' && str[i] <= '\r' && str[i] == ' ')
		i++;
	if (str[i] != '-')
	{
		if (str[i] == '+')
			i++;
		while (ft_isdigit(str[i]))
		{
			res = res * 10 - 48 + str[i];
			i++;
		}
	}
	else
		i++;
		while (ft_isdigit(str[i]))
		{
			res = res * 10 + 48 - str[i];
			i++;
		}
	return (res);
}
