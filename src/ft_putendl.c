/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:41:49 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/11/03 21:10:41 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putstr("\n");
}
