/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:18:56 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/27 15:28:39 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"


void 	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = -1;
	if (s && f)
		while (s[++i])
			f(i, &s[i]);

}

void 	ft_striteri_test(unsigned int i, char *c)
{
	ft_putnbr((int) i);
	ft_putchar(*c);
}
