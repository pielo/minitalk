/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 19:34:40 by tlloancy          #+#    #+#             */
/*   Updated: 2014/02/08 20:41:19 by mlanglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "get_next_line.h"

static char			*ft_get_next(char *str, char **line)
{
	char			*tmp;
	char			*stockline;
	size_t			i;
	size_t			len;

	len = ft_strlen(str);
	tmp = malloc(sizeof(char) * len + 1);
	stockline = malloc(sizeof(char) * len + 1);
	i = 0;
	tmp = str;
	while (str[i] != '\n')
		i++;
	tmp[i] = '\0';
	*line = ft_strsub(tmp, 0, i);
	if (tmp[i + 1])
		stockline = ft_strsub(tmp, i + 1, len - i);
	return (stockline);
}

int					get_next_line(int const fd, char **line)
{
	char			*buf;
	int				nbread;
	static char		*rest;

	buf = ft_strnew(BUFF_SIZE);
	while ((nbread = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (!rest)
			rest = ft_strnew(BUFF_SIZE);
		rest = ft_strjoin(rest, buf);
		free(buf);
		if (ft_strchr(rest, '\n') && (rest = ft_get_next(rest, line)))
			return (1);
		if (nbread < BUFF_SIZE && (*line = ft_strsub(rest, 0, ft_strlen(rest))))
			return (1);
	}
	rest = ft_strjoin(rest, buf);
	if (ft_strchr(rest, '\n') && (rest = ft_get_next(rest, line)))
		return (1);
	else if (!ft_strchr(rest, '\n') && !*line)
	{
		*line = ft_strsub(rest, 0, ft_strlen(rest));
		return (1);
	}
	return (nbread);
}
