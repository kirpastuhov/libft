/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:41:49 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/03 15:47:35 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/* static void ft_putstr(char const *str) */
/* { */
/* 	write(1, str, ft_strlen(str)); */
/* } */

void 	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putstr("\n");
}
