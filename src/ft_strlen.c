/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:46:11 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/03 15:50:35 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char const *str)
{
	int counter;

	counter = 0;
	while(*str++)
		counter++;
	return (counter);
}
