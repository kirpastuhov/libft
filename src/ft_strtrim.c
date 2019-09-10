/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:42:56 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/08 19:32:17 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char 	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	char			*res_str;

	start = 0;
	end = 0;
	if (s)
	{
		while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			start++;
		if (s[start] == '\0')
			return (ft_strnew(1));
		end = (unsigned int)ft_strlen(s) - 1;
		while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
			end--;
		if (!(res_str = ft_strsub(s, start, (end - start + 1))))
			return (NULL);
	}
	else
		res_str = NULL;
	return (res_str);
}
