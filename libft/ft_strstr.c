#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(haystack[i] != '\0')
	{	
		while(haystack[i] != needle[j] && haystack[i] != '\0')
			i++;
		while(haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if(needle[j] == '\0')
			return (char *)(&haystack[i - j]);
		j = 0;
	}
	return(NULL);
}