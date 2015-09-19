#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *zero;
	size_t i;

	zero = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		zero[i] = '\0';
		i++;
	}
}