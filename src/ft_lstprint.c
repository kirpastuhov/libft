/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:02:15 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/11/03 20:57:27 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstprint(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		ft_putstr(" ──> ");
		list = list->next;
	}
	ft_putstr("NULL");
}
