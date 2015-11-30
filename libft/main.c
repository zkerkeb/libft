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
	printf("%s", ft_strjoin("","boys"));

	printf("%d",strcmp("boys",ft_strjoin("","boys")));
	return(0);
}

