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
 	const char c[4] = "ace";
	char d[15] = "Victoire";
      
	printf("%zu",ft_strlcat(d,c,10));
	return(0);
}
