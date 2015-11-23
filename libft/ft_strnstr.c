/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:46:27 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/23 22:05:37 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i <= n)
	{
		while (haystack[i] != needle[j] && haystack[i] != '\0' && i <= n)
			i++;
		while (haystack[i] == needle[j] && i <= n)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (char *)(&haystack[i - j]);
		j = 0;
	}
	return (NULL);
}
