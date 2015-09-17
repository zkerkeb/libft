#include "libft.h"
//#include <stdlib.h>
//size_t ft_strlen(const char *s);
// voir pour la gestion d'erreur ENONEM
char *ft_strcpy(char *dest, const char *src);

char *ft_strdup(const char *s)
{
	char *s2;
	size_t len;

	len = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char*) * (len + 1));
	if(s)
	{
		s2 = ft_strcpy(s2,s);
		return(s2);
	}
	return(NULL);
}