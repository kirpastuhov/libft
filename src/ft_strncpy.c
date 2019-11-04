/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:13:26 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/11/03 21:22:30 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, char const *src, size_t n)
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

