/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:29:13 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/15 15:00:27 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	unsigned char 	*uc_dst;
	unsigned char 	*uc_src;
	unsigned char 	uc_c;
	int 			i;

	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	uc_c   = (unsigned char)c;
	i 	   = 0;
	while (size--)
	{
		uc_dst[i] = uc_src[i];
		if (uc_c == uc_dst[i])
			return (&uc_dst[i + 1]);
		i++;
	}
	return (NULL);
}
