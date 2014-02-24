/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:59:56 by mlanglet          #+#    #+#             */
/*   Updated: 2014/02/09 18:05:07 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst->next != NULL)
		ft_lstiter(lst->next, f);
	f(lst);
}
