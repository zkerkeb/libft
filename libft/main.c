#include <stdio.h>
#include "libft.h"

int main()
{
	const char b[50] = "Que volent mes fleche";
	const char c[50] = "Que volent mes fleche";
	int a;

	a = ft_strcmp(b,c);

	ft_putnbr(a);
	return(0);
}