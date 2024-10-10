#include "../../libft.h"
#include <string.h>
#include <stdio.h>

void *square(void *content)
{
	int *c = malloc(sizeof(int));
	*c = *((int *) content) * *((int *) content);
	return (void *) c;
}

void del(void *content)
{
	printf("inside del\n");
	free(content);
}

void print(void *i)
{
	printf("%d\n", *((int*) i));
}


int main()
{
	int *i1 = malloc(sizeof(int));
	int *i2 = malloc(sizeof(int));
	int *i3 = malloc(sizeof(int));
	*i1 = 1;
	*i2 = 2;
	*i3 = 3;
	t_list *node1 = ft_lstnew((void *)i1);
	t_list *node2 = ft_lstnew((void *)i2);
	t_list *node3 = ft_lstnew((void *)i3);

	if (node1 == NULL || node2 == NULL || node3 == NULL)
	{
		printf("algun nodo no se ha creado\n");
		exit(1);
	}

	t_list **head = &node1;

	ft_lstadd_back(head, node2);
	ft_lstadd_back(head, node3);

	t_list *new = ft_lstmap(*head, square, del);
	printf("original list:\n");
	ft_lstiter(*head, print);
	printf("\nnew list:\n");
	ft_lstiter(new, print);

}