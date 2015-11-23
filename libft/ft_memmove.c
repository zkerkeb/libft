/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:49:07 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/23 17:43:46 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)malloc(sizeof(*tmp) * n);
	if (tmp)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
		free(tmp);
		return (dest);
	}
	return (NULL);
}
