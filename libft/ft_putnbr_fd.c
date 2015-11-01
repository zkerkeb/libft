#include "libft.h"

void ft_putnbr_fd(int n,int fd)
{
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar_fd('-',fd);
	}

	if(n < 10)
	{
		ft_putchar_fd(n + '0',fd);
	}
	else
	{
		ft_putnbr_fd(n / 10,fd);
		ft_putnbr_fd(n % 10,fd);
	}
}
