#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    int i;
    
    i = 0;
    
    if(s && f)
    {
        while(s[i] != '\0')
        {
            f(&s[i]);
            i++;
        }
    }
}
