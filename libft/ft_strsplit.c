#include "libft.h"

int  count_words(const char *str, char c)
{
    int     i;
    int     nbr;
    
    i = 0;
    nbr = 0;
    
    while(str[i] != '\0')
    {
        if((str[i] != c) && (str[i + 1] == c || str[i + 1] == '\0'))
        {
            nbr++;
            i++;
        } 
        else
            i++;
    }
    return(nbr);
}

char **word_malloc(const char *str, char **tab, char c)
{
	int i;
	int tmp;
	int mcount;

	i = 0;
	tmp = 0;
	mcount = 0;

	while(str[i] != '\0')
	{
		if(str[i] != c)
			tmp++;
		i++;
		if(str[i] == c || str[i] == '\0')
		{
			tab[mcount] = (char *)malloc(sizeof(char) * (tmp + 1));
			tmp = 0;
			mcount++;
			while(str[i] == c)
				i++;	
		}
	}
	return(tab);	
}

char **write_tab(const char *str,char **tab, char c, int i)
{
	int tmp;
	int j;

	j = 0;
	tmp = 0;
	while(str[i] != '\0' )
	{
		while(str[i] == c)
			i++;
		while(str[i] != c && str[i] != '\0')
		{
			tab[tmp][j] = str[i];
			j++;
			i++;
		}
		while(str[i] == c)
			i++;
		tab[tmp][j] = '\0';
		j = 0;
		if(str[i] != '\0')
			tmp++;
	}
	tmp++;
	tab[tmp][j] = '\0';
	return(tab);
}

char **ft_strsplit(char const *s, char c)
{
	int words;
	char **tab;

	words = count_words(s,c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));

	word_malloc(s,tab,c);

	write_tab(s,tab,c,0);
	return(tab);
}