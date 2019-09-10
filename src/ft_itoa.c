/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastuhox <kirillpastuhow@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:42:39 by kpastuhox         #+#    #+#             */
/*   Updated: 2019/09/10 15:31:48 by kpastuhox        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int 	ft_numlen(int n)
{
	int len;

	len = 0;
	if (len < 0)
		len++;
	while (n > 9 || n < -9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int 	ft_isnegative(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char		*ft_itoa(int n)
{
	char 	*res_str;
	int 	i;
	int 	sign;

	i = 0;
	res_str = ft_strnew(ft_numlen(n));
	if (!res_str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = ft_isnegative(n);
	n *= sign;
	if (n == 0)
		*(res_str + i++) = '0';
	while (n > 0)
	{
		*(res_str + i++) = n % 10 + '0';
		n /= 10;
	}
	if (sign == -1)
		*(res_str + i++) = '-';
	*(res_str + i) = '\0';
	ft_strrev(res_str);
	return (res_str);
}
