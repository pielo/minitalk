/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:57:15 by mlanglet          #+#    #+#             */
/*   Updated: 2014/02/09 18:03:06 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*tab;
	int		i;

	tab = ft_itoa(n);
	i = 0;
	while (tab[i] != '\0')
	{
		write(fd, &tab[i], 1);
		i++;
	}
}
