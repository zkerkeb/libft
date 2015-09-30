#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main()
{	
	char str[10] = "aceeee";
	char str2[10] = "aceee5";

	printf("%d",ft_strnequ(str,str2,5));

	return(0);
}