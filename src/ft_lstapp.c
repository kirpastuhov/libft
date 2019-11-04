/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:26:51 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/11/03 20:56:34 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstappend(t_list **begin_list, t_list *new_node)
{
	t_list *cursor;

	cursor = *begin_list;
	if (!begin_list)
	{
		*begin_list = new_node;
		return ;
	}
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_node;
	}
}
