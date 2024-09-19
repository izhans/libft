#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "substr"

void test_substr()
{
	char *str = "No es cruel la vida";
	int len = strlen(str) - 3;
	char *substr = ft_substr(str, 3, len);

	if(strcmp(str + 3, substr))
	{
		print_test_fail(1, FUNCTION);
		printf("Expected: >>>%s<<<\nActual: >>>%s<<<\n", str + 3, substr);
	}
}

void test_size_is_bigger_than_substr()
{
	char *str = "p*ta vida";
	int len = strlen(str);
	char *substr = ft_substr(str, 5, len);

	if(strcmp(str + 5, substr))
	{
		print_test_fail(2, FUNCTION);
		printf("Expected: >>>%s<<<\nActual: >>>%s<<<\n", str + 5, substr);
	}
}

int main()
{
	test_substr();
	test_size_is_bigger_than_substr();
}
