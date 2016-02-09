/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:46:27 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/30 19:32:21 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_test(const char *s1, const char *s2, size_t c)
{
	size_t i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < c && s2[i])
		i++;
	if (s2[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s2[0] == '\0' || s2 == 0)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		if (ft_test(&s1[i], s2, n - i) == 1)
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
