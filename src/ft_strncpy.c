/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:13:26 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/06 18:19:56 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	char			*real_dest;
	unsigned int	counter;

	counter = 0;
	real_dest = dest;
	while (*src != '\0' && n > counter)
	{
		*dest++ = *src++;
		counter++;
	}
	while (n > counter)
	{
		*dest++ = '\0';
		counter++;
	}
	return (real_dest);
}

