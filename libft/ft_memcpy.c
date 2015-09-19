#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d1;
	const char *s1;
	
	d1 = (unsigned char *)dest;
	s1 = (const char *)src;
	i = 0;
	while(i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return(d1);
}