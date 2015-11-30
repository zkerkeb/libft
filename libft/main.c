#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void *ft_test(t_list *elem);

char ft_sup(unsigned int a, char c)
{
  a = a + 1;
  c += 32;
  return(c);
}


int main()
{
	t_list *list;
	t_list *list2;
	t_list *list3;	
	void (*f)(t_list);

	const char c[50] = "tonton";
	
	f = ft_test;
	list = ft_lstnew(c, 50);



	list2 = ft_lstnew("ta race", 50);				
	
	ft_lstadd(&list, list2);
	list3 = ft_lstnew("ace",50);

	ft_lstadd(&list, list3);
	while(list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
	
	ft_lstiter(list3,f);
		
	return(0);
}

