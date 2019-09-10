/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:19:04 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/09 12:20:02 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char 	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero (str, size + 1);

	/* str = NULL; */
	/* if (size) */
	/* { */
	/* 	str = malloc(size); */
	/* 	if (!str) */
	/* 		return (NULL); */
	/* 	while (size - 1) */
	/* 		str[size--] = '\0'; */
	/* 	str[size] = '\0'; */
	/* } */
	return (str);
}
