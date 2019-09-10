/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:23:23 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/08 16:20:41 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char const *s2)
{
	/* char *real_dest; */
	/* int i; */

	/* i = 0; */
	/* real_dest= s1; */
	/* while (s2[i]) */
	/* { */
	/* 	s1[i] = s2[i]; */
	/* 	i++; */
	/* } */
	/* s1[i] = '\0'; */
	/* return (real_dest); */
	char *real_dest;

	real_dest = s1;
	while ((*s1++ = *s2++))
		;
	return (real_dest);
}

