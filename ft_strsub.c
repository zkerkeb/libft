/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:47:23 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/26 20:02:18 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*cpy;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	cpy = malloc(sizeof(char) * (len + 1));
	if (s && cpy)
	{
		while (s[i + start] != '\0' && j < len)
		{
			cpy[j] = s[i + start];
			i++;
			j++;
		}
		cpy[j] = '\0';
		return (cpy);
	}
	return (NULL);
}
