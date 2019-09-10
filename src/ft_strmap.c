/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:44:52 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/05 12:10:26 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char 	*ft_strmap(char const *s, char (*f)(char))
{
	char 	*str;
	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		if (!str)
			return (NULL);
		while (*s)
			*str++ = f(*s++);
	}
	else
		return (NULL);
	return (str);
}

char 	ft_strmap_test(char c)
{
	ft_putchar(c);
	c = 'a';
	ft_putchar(c);
	return (c);
}
