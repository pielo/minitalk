/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 23:32:25 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/12 00:32:50 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*ptr1;
	char	*ptr2;

	if (s1 && s2)
	{
		ptr1 = (char*)s1;
		ptr2 = (char*)s2;
		while ((*ptr1 == *ptr2) && *ptr1 && *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr1 == *ptr2)
			return (1);
	}
	return (0);
}
