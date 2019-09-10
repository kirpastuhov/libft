/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:04:17 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/09 14:05:11 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strrev(char *str)
{
	char *end;
	char c;

	end = str + ft_strlen(str) - 1;
	while (str < end)
	{
		c = *str;
		*str++ = *end;
		*end-- = c;
	}
}
