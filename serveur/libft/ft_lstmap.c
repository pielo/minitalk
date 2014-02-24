/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlloancy <tlloancy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 23:27:58 by tlloancy          #+#    #+#             */
/*   Updated: 2013/12/12 03:29:15 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	int		i;
	t_list	*new;
	t_list	*tmp_new;

	i = 0;
	tmp_new = NULL;
	while (lst)
	{
		new = (t_list*)malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstdel(&new, &ft_bzero);
			return (NULL);
		}
		if (tmp_new == NULL)
			tmp_new = new;
		ft_memcpy(new, (*f)(lst), sizeof(t_list));
		new->next = new;
		lst = lst->next;
	}
	return (tmp_new);
}
