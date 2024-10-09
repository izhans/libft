#include "../../libft.h"
#include <string.h>
#include <stdio.h>

void del(void *content)
{
	printf("inside del\n");
	free(content);
}

int main()
{
	t_list *lst = ft_lstnew(strdup("1"));
	t_list *lst2 = ft_lstnew(strdup("2"));

	if (lst == NULL)
	{
		printf("algun nodo no se ha creado\n");
		exit(1);
	}

	ft_lstadd_back(&lst, lst2);

	void (*delete)(void *) = del;
	ft_lstdelone(lst, delete);

	if (lst->content != NULL || lst->next != NULL)
	{
		printf("[KO] lstdelone didn't delete the node or the node content\n");
		printf("%p\n", lst);
		printf("content: %s\n", (char *) lst->content);
		printf("next: %p\n", (char *) lst->next);
	}

	if (lst2 == NULL || lst2->content == NULL)
	{
		printf("[KO] lstdelone deleted the next node or the next node content\n");
	}
	
	
}