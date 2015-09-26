#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *mem;

	mem = (void *)malloc(sizeof(mem) * size);
	if(mem && size != 0)
	{
		ft_bzero(mem,size);
		return(mem);
	}
	return(NULL);
}