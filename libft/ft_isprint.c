#include "libft.h"

int ft_isprint(int c)
{
	if(c >= 32 && c <= 127)
		return(c);
	return(0);
}