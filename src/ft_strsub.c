/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:30:46 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/06 18:20:56 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char 	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res_str;
	
	if (s)
	{
		res_str = ft_strnew(len);
		if (!res_str)
			return (NULL);
		ft_strncpy(res_str, s + start, len);
		res_str[len] = '\0';
	}
	else
		return (NULL);
	return (res_str);

}
