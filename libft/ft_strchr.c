#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i  = 0;
	while(s[i] != c && s[i] != '\0')
		i++;
	if(s[i] == c || c == '\0')
		return(char *)(&s[i]);
	else	
		return(NULL);
	
}