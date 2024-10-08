#include "../../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	t_list *lst = ft_lstnew("1");
	t_list *second = ft_lstnew("2");
	t_list *third = ft_lstnew("3");

	if (lst == NULL || second == NULL || third == NULL)
	{
		printf("algun nodo no se ha creado\n");
		exit(1);
	}

	ft_lstadd_front(&third, second);
	ft_lstadd_front(&second, lst);

	t_list *last = ft_lstlast(lst);
	if (last->next != NULL)
	{
		printf("[KO] lstlast didn't returned the last node");
		printf("content: %s\n", (char *) last->content);
		printf("next: %p\n", (char *) last->next);
	}
	
	if (ft_lstlast(NULL) != NULL)
	{
		printf("[KO] lstlast returned something for NULL as a node");
	}
	
}