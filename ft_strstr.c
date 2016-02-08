/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 22:22:17 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/25 18:38:50 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (char *)&haystack[0];
	while (haystack[i] != '\0')
	{
		while (haystack[i] != needle[j] && haystack[i] != '\0')
			i++;
		while (haystack[i] == needle[j] && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (char *)(&haystack[i - j]);
		i = i - j + 1;
		j = 0;
	}
	return (NULL);
}
