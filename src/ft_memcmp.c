/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:16:12 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/15 21:21:52 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int 	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char *uc_s1;
	unsigned char *uc_s2;

	uc_s1 = s1;
	uc_s2 = s2;
	while (uc_s1 && uc_s2 && n--)
		if (*uc_s1++ != *uc_s2++)
			return (uc_s1 - uc_s2);
	return (0);
}
