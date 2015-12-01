#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void *ft_test(t_list *elem);

char ft_sup(unsigned int a, char c)
{
  a = a + 1;
  c += 32;
  return(c);
}


int main()
{
	//char *r;
	
	printf("%s",ft_strtrim("Bonjour"));

	return(0);
}

