#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int n;
	int neg;

	i = 0;
	n = 0;
	neg = 0;
	while(nptr[i] == 32 || nptr[i] == '\v' || nptr[i] == '\t' || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\r' || nptr[i] == '\n')
		i++;
	if(nptr[i] == '-')
		neg = 1;
	if(nptr[i] == '-' || nptr[i] == '+')
		i++;
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		n *= 10;
		n += nptr[i] - '0';
		i++;
	}
	if(neg == 1)
		return(-n);
	return(n);
}