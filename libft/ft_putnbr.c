#include "libft.h"

void ft_putnbr(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar('-');
	}

	if(n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
