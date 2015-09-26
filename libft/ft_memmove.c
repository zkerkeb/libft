#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp;
	
	tmp = (unsigned char *)malloc(sizeof(*tmp) * n);
	if(tmp)
	{
		ft_memcpy(tmp,src,n);
		ft_memcpy(dest,tmp,n);
		free(tmp);
		return(dest);
	}
	return(NULL);
}