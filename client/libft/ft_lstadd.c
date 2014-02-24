/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlanglet <mlanglet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:59:45 by mlanglet          #+#    #+#             */
/*   Updated: 2014/02/09 18:05:31 by tlloancy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
