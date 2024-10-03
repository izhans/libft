#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "split"

int main()
{
	char *str = " Hola     mundo  que pasa ";
	// char *str = NULL;
	char c = ' ';

	char **res = 
	ft_split(str, c);
	if (res == NULL)
	{
		printf("res is NULL\n");
		return 0;
	}
	
	while (*res)
	{
		printf("<%s>\n", *res);
		res++;
	}
	
	return 0;
}
