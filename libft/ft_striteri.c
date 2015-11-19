#include "libft.h"

// a tester , mon test afficher une lettre sur deux
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;
    
    i = 0;
    if(s && f)
    {
        while(s[i] != '\0')
        {
            f(i, &s[i]);
            i++;
        }
    }
}
