/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:23:23 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/11/03 21:12:54 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char const *s2)
{
	char *real_dest;

	real_dest = s1;
	while ((*s1++ = *s2++))
		;
	return (real_dest);
}

