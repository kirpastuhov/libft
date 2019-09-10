/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:17:49 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/08/07 13:33:46 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int j;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		j = 0;
		while (to_find[j])
		{
			if (*(str + j) != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (str);
		str++;
	}
	return (0);
}
