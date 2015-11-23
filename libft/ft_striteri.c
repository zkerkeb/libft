/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:23:58 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/23 17:24:06 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// a tester , mon test afficher une lettre sur deux
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;
    
    i = 0;
    if(s && f)
    {
        while(s[i] != '\0')
        {
            f(i, &s[i]);
            i++;
        }
    }
}
