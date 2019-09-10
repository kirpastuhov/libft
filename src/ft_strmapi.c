/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:13:10 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/05 12:24:59 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char 	*str;
	int 	i;

	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		if (!str)
			return (NULL);
		i = 0;
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	else
		return (NULL);
	return (str);
	
}

char 	ft_strmapi_test(unsigned int i, char c)
{
	ft_putnbr(i);
	ft_putchar(c);
	c = 'a';
	ft_putchar(c);
	return (c);
}
