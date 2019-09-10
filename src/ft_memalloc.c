/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 12:01:32 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/17 13:09:09 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 	*ft_memalloc(size_t size)
{
	unsigned char *ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (unsigned char *)malloc(size);
		if (!ptr)
			return (NULL);
		while (size)
			ptr[size--] = 0;
	}
	return ((void *)ptr);
}
