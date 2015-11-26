#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char ft_sup(unsigned int a, char c)
{
  a = a + 1;
  c += 32;
  return(c);
}

int main()
{
	char const s1[50] = "\t\t\n\t\t   "	;
	//char const s2[50] = "def";
	char *test;
	
	test = ft_strtrim(s1);
	
	printf("%d",strcmp(test,"" ));
	
	return(0);
}
