/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:30:05 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/30 20:16:40 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
		while (s[i] != '\0')
		{
			str[i] = f((char)s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
