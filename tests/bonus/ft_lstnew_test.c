#include "../../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char *content = "patata";
	t_list *node = ft_lstnew(content);
	if (node == NULL)
		printf("el nodo no existe\n");

	if (strcmp((char *) node->content, content) != 0)
	{
		printf("[KO] cannot create a node with a str content");
	}
	
}