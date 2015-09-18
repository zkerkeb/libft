#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i  = ft_strlen(s);
	while(s[i] != c && i >= 0)
		i--;
	if(s[i] == c || c == '\0')
		return(char *)(&s[i]);
	else	
		return(NULL);
	
}