/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:54:44 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/23 15:55:12 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = (void *)malloc(sizeof(mem) * size);
	if (mem && size != 0)
	{
		ft_bzero(mem, size);
		return (mem);
	}
	return (NULL);
}
