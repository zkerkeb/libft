#include "libft.h"

int ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return(c + 1);
	return(0);
}