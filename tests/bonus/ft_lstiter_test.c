#include "../../libft.h"
#include <string.h>
#include <stdio.h>

void print(void *content)
{
	printf("%s\n", (char *) content);
}

int main()
{

	t_list *node1 = ft_lstnew("1a");
	t_list *node2 = ft_lstnew("2b");
	t_list *node3 = ft_lstnew("3c");

	if (node1 == NULL || node2 == NULL || node3 == NULL)
	{
		printf("algun nodo no se ha creado\n");
		exit(1);
	}

	t_list **head = &node1;

	ft_lstadd_back(head, node2);
	ft_lstadd_back(head, node3);

	ft_lstiter(*head, print);
}