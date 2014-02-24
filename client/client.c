/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 19:29:28 by mlanglet          #+#    #+#             */
/*   Updated: 2014/02/09 17:44:36 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <signal.h>
#include "libft/includes/libft.h"

static void		ft_conv2(char *pid, char c)
{
	int			j;

	j = 0;
	while (j++ < 8)
	{
		if (c & 128)
			kill(ft_atoi(pid), SIGUSR2);
		else
			kill(ft_atoi(pid), SIGUSR1);
		c <<= 1;
		usleep(150);
	}
}

static void		ft_conv(char *pid, char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_conv2(pid, str[i]);
		i++;
	}
	ft_conv2(pid, '\0');
}

int				main(int argc, char **argv)
{
	if (argc == 3)
		ft_conv(argv[1], argv[2]);
	return (0);
}
