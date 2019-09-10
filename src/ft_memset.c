/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:50:08 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/14 13:29:43 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *unsigned_b;

	unsigned_b = (unsigned char *)b;
	while (len--)
		*unsigned_b++ = (unsigned char)c;
	return (b);
}
