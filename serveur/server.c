/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 20:45:28 by tlloancy          #+#    #+#             */
/*   Updated: 2014/02/09 17:56:02 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static void			get_char_from_bin(char *bin)
{
	int				i;
	int				d;
	char			*res;
	static char		*str = NULL;

	d = 128;
	i = -1;
	res = ft_strnew(2);
	if (!str)
		str = ft_strnew(2);
	while (++i < 8 && bin[i])
	{
		if (bin[i] == '1')
			res[0] +=d;
		d /= 2;
	}
	if (res[0] != '\0')
		str = ft_strjoin(str, res);
	else
	{
		write (1, str, ft_strlen(str));
		write (1, "\n", 1);
		free(str);
		str = NULL;
	}
}

static void			ft_putstrsig(int sig)
{
	static int		i = 0;
	static int		array[9];
	char			*charray;
	int				x;

	x = -1;
	charray = ft_strnew(9);
	if (i < 7)
	{
		array[i] = sig % 30;
		i++;
	}
	else
	{
		array[i] = sig % 30;
		while (++x < 8)
			charray[x] = array[x] + 48;
		get_char_from_bin(charray);
		free(charray);
		ft_bzero(array, 9);
		i = 0;
	}
}

int					main(void)
{
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (42)
	{
		signal(SIGUSR1, ft_putstrsig);
		signal(SIGUSR2, ft_putstrsig);
	}
	return (0);
}
