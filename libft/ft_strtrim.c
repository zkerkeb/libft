/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:47:50 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/12/01 18:08:25 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trim(char *cpy, int st, int end, char const *s)
{
	int i;

	i = 0;
	while (st <= end)
	{
		cpy[i] = s[st];
		i++;
		st++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char		*ft_strtrim(char const *s)
{
	int		st;
	int		end;
	char	*cpy;

	st = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (s[st] == ' ' || s[st] == '\t' || s[st] == '\n')
		st++;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	if (st == (int)ft_strlen(s))
		st = 0;
	cpy = (char *)malloc(sizeof(char) * (end - st + 1));
	if (cpy && s)
	{
		cpy = ft_trim(cpy, st, end, s);
		return (cpy);
	}
	return (NULL);
}
