#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int main()
{
	
	//int c;
	//c = 65;
	unsigned char a[50] = "";
	const char b[50] ="Wesh les beurettes";

	printf("%p\n",ft_memccpy(a,b,'a',10));
	printf("%p\n",memccpy(a,b,'e',10));
	//printf("%p",memcpy(a,b,10));
	//char d[50] = "lolee co acsdfsdfl lolelo;pe";
	//ft_putnbr(ft_isalnum(45));
	//ft_memset(s,c,3);
	
	
	//ft_putstr(ft_strchr("lellee",'A'));
	return(0);
}