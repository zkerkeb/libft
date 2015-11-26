/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:54:28 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/26 15:50:12 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cnumber(int n)
{
	int			count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (count + 1);
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_cnumber(n);
	str = malloc(sizeof(char) * (ft_cnumber(n) + 1));
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	str[i + 1] = '\0';
	while (n)
	{
		i--;
		str[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}
