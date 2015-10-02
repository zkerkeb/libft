#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	int len1;
	int len2;

	if(!s1 || !s2)
			return(NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (len1 + len2 + 1));
	if(join)
	{
		join = ft_strcat((char *)s1,s2);
		return(join);		
	}
	return(NULL);
}