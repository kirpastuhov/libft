/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:32:39 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/09 13:32:41 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int ft_wordscount(char const *s, char c)
{
	int flag;
	int words;

	flag  = 0;
	words = 0;
	while (*s)
	{
		if (!flag && *s != c) //  beginning of the word
		{
			flag = 1;
			words++;
		}
		if (flag && *s == c)  //  ending of the word
			flag = 0;
		s++;
	}
	return (words);
}

static int ft_nextword(char const *s, char c)
{
	int i;
	
	i = 0;

	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char 	**ft_strsplit(char const *s, char c)
{
	char 	**ptr;
	int 	words;
	int 	i;

	ptr = NULL;
	if (s)
	{
		i = 0;
		words = ft_wordscount(s, c);
		ptr = (char **)malloc(sizeof(char *) * words + 1);
		if (!ptr)
			return (NULL);
		while (words--)
		{
			while (*s == c && *s != '\0')
				s++;
			*(ptr + i) = ft_strsub(s, 0, ft_nextword(s, c));
			if (!*(ptr + i))
				return (NULL);
			s += ft_nextword(s, c);
			i++;
		}
		*(ptr + i) = NULL;
	}
	return (ptr);
}
