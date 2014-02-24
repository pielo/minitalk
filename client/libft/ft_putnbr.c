/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:25:54 by mlanglet          #+#    #+#             */
/*   Updated: 2014/02/09 18:03:48 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "includes/libft.h"

void	ft_putnbr(int n)
{
	char	*tab;
	int		i;

	tab = ft_itoa(n);
	i = 0;
	while (tab[i] != '\0')
	{
		write(1, &tab[i], 1);
		i++;
	}
}
