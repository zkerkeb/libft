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
	char const s1[50] = "***salut****!**";
	char **ace;
	int i;

	i = 0;
	ace = ft_strsplit(s1, '*');
	
	while(ace || i <= 1)
	{
		ft_putstr(ace[i]);
		ft_putchar('\n');
		i++;
	}



	return(0);
}

