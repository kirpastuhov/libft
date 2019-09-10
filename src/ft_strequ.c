/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:36:03 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/05 12:38:24 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1)
		if (*s1++ != *s2++)
			return (0);
	if (*s1 != *s2)
		return (0);
	return (1);
}