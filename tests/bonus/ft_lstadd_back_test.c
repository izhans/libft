#include "../../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	t_list *lst = ft_lstnew("1");
	t_list *new = ft_lstnew("2");

	if (lst == NULL || new == NULL)
	{
		printf("algun nodo no se ha creado\n");
		exit(1);
	}

	ft_lstadd_back(&lst, new);

	if (strcmp((char *) lst->content, "1") != 0 || strcmp((char *) lst->next->content, "2") != 0)
	{
		printf("[KO] lst havent added new to the end");
	}

	while (lst->next)
	{
		printf("%s\n", (char *) lst->content);
		lst = lst->next;
	}
	printf("%s\n", (char *) lst->content); // print the last node content
	
	
}