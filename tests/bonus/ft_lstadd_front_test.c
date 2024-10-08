#include "../../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char *content = "2";
	t_list *lst = ft_lstnew("1");
	t_list *new = ft_lstnew(content);

	if (lst == NULL || new == NULL)
	{
		printf("algun nodo no se ha creado\n");
		exit(1);
	}

	ft_lstadd_front(&lst, new);

	if (strcmp((char *) lst->content, content) != 0 || strcmp((char *) lst->next->content, "1") != 0)
	{
		printf("[KO] lst havent added new to the beggining");
	}

	while (lst->next)
	{
		printf("%s\n", (char *) lst->content);
		lst = lst->next;
	}
	printf("%s\n", (char *) lst->content); // print the last node content


	t_list *other = ft_lstnew("other");
	ft_lstadd_front(NULL, other);

	t_list *other2 = ft_lstnew("other2");
	ft_lstadd_front(&other2, NULL);
	
}