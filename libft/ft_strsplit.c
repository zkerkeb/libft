/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 22:11:18 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/26 22:17:53 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(const char *str, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
 	while (str[i] != '\0')
  	{
		if ((str[i] != c) && (str[i + 1] == c || str[i + 1] == '\0'))
  		{
			nbr++;
			i++;
	 	}
  		else
  			i++;
  	}
  return (nbr);
}

char	**word_malloc(const char *str, char **tab, char c)
{
  int	i;
  int	tmp;
  int	mcount;

  i = 0;
  tmp = 0;
  mcount = 0;
  while (str[i] != '\0')
  {
	  if(str[i] != c)
	  {
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			tmp++;
		}
		tab[mcount] = (char *)malloc(sizeof(char) * (tmp + 1));
		mcount++;
		tmp = 0;
	  }
	  else
		  i++;
  }	
  return (tab);
}


char	**write_tab (char **tab, char const *s, char c)
{
	int i;
	int indext;
	int indext2;

	indext = 0;
	indext2 = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				tab[indext][indext2] = s[i];
				indext2++;
				i++;
			}
			indext++;
			indext2 = 0;
		}
		else
			i++;
	}
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**tab;

	words = count_words(s, c);
	if (s == NULL && words == 0)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	word_malloc(s, tab, c);
	write_tab(tab, s, c);
	return (tab);
}
