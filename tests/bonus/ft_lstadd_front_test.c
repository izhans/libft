#include "../../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char *content = "patata";
	t_list *lst = ft_lstnew("frita");
	t_list *new = ft_lstnew(content);

	if (lst == NULL || new == NULL)
	{
		printf("algun nodo no se ha creado\n");
		exit(1);
	}

	ft_lstadd_front(&lst, new);

	if (strcmp((char *) lst->content, content) != 0 || strcmp((char *) lst->next->content, "frita") != 0)
	{
		printf("[KO] lst havent added new to the beggining");
	}

	while (lst->next)
	{
		printf("%s\n", (char *) lst->content);
		lst = lst->next;
	}
	printf("%s\n", (char *) lst->content); // print the last node content
	
	
}