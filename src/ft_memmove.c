/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:29:07 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/15 20:40:27 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	i = -1;
	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	if (uc_src < uc_dst)
		while (len--)
			uc_dst[len] = uc_src[len];
	else
		while (++i < len)
			uc_dst[i] = uc_src[i];
	return (uc_dst);
}
