/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 13:35:30 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/09 12:05:19 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
	/* unsigned char *unsigned_s; */

	/* unsigned_s = (unsigned char *)s; */
	/* while (n--) */
	/* 	*unsigned_s++ = 0; */
}
