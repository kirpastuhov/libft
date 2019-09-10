/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:30:33 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/06 19:39:23 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char 	*ft_strjoin(char const *s1, char const *s2)
{
	char 	*cursor;
	char 	*res_str;

	if (s1 && s2)
	{
		cursor = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (!cursor)
			return (NULL);
		res_str = cursor;
		while (*s1)
			*cursor++ = *s1++;
		while (*s2)

			*cursor++ = *s2++;
	}

	else
		return (NULL);
	return (res_str);
}
