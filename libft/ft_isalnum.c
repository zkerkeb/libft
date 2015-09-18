#include "libft.h"
// int ft_isdigit(int c);
// int ft_isalpha(int c);

int ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return(c);
	return(0);
}