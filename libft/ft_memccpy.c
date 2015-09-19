#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d;
	const char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const char *)src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		if(d[i] == c)
			return(d + i + 1);
		i++;
	}
	return(NULL);	
}