/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:29:17 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/11/03 21:08:54 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *uc_s;
	unsigned char uc_c;

	uc_s = (unsigned char *)s;
	uc_c = (unsigned char)c;

	while (n--)
	{
		if (*uc_s == uc_c)
			return (uc_s);
		uc_s++;
	}
	return (NULL);
}
