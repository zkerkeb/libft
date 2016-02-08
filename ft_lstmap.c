/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:20:31 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/30 19:34:46 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *bef;
	t_list *aft;

	new = NULL;
	if (lst && (*f))
	{
		new = (*f)(lst);
		bef = new;
		lst = lst->next;
		while (lst)
		{
			aft = (*f)(lst);
			bef->next = aft;
			bef = aft;
			lst = lst->next;
		}
		bef->next = NULL;
	}
	return (new);
}
