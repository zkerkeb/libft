/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:30:05 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/24 17:48:34 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			str[i] = f((char)s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
