/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:29:04 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/14 14:56:46 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char *uc_dst;
	unsigned char *uc_src;

	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;

	while (size--)
		*uc_dst++ = *uc_src++;
	return (dst);
}
