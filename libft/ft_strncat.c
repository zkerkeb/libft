#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	int j;

	i = 0;
	j = 0;
	while(dest[j] != '\0')
		j++;
	while(src[i] != '\0' && i <= n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return(dest);

}