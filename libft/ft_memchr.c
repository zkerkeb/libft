#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s1;
	unsigned char c1;
	size_t i;

	c1 = (unsigned char)c;
	s1 = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		if(s1[i] == c1)
			return(s1 + i);
		i++;
	}
	return(NULL);
} 