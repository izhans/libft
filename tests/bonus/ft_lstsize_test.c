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

	int size = ft_lstsize(lst);
	if (size != 2)
	{
		printf("[KO] lstsize returned %d instead of 2", size);
	}

	size = ft_lstsize(NULL);
	if (size != 0)
	{
		printf("[KO] lstsize returned %d instead of 0 (because there was no list)", size);
	}

	t_list *other = ft_lstnew("content");

	size = ft_lstsize(other);
	if (size != 1)
	{
		printf("[KO] lstsize returned %d instead of 1", size);
	}
	
}