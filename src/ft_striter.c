/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:24:00 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/27 15:16:49 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s)
			f(s++);

}

void 	ft_striter_test(char *c)
{
	ft_putchar(*c);
}
