#include "../libft.h"
#include "_test_functions.c"
#include <string.h>
#include <stdlib.h>

#define FUNCTION "substr"

void test_substr_is_at_the_end()
{
	char *str = "No es cruel la vida";
	int start = 3;
	int len = strlen(str) - start;
	char *substr = ft_substr(str, start, len);

	if(strcmp(str + start, substr))
	{
		print_test_fail(1, FUNCTION);
		printf("Expected: >>>%s<<<\nActual: >>>%s<<<\n", str + start, substr);
	}
	free(substr);
}

void test_size_is_bigger_than_substr()
{
	// remember to check that malloc only allocates the memory we are really using
	char *str = "p*ta vida";
	int start = 5;
	int len = strlen(str);
	char *substr = ft_substr(str, start, len);

	if(strcmp(str + start, substr))
	{
		print_test_fail(2, FUNCTION);
		printf("Expected: >>>%s<<<\nActual: >>>%s<<<\n", str + start, substr);
	}
	free(substr);
}

void test_substr_is_in_the_middle()
{
	char *str = "que lindo dia para comprobar que una funcion no rompe";
	int start = 4;
	int len = 9;
	char *substr = ft_substr(str, start, len);
	char *expected = "lindo dia";
	if(strcmp(expected, substr))
	{
		print_test_fail(3, FUNCTION);
		printf("Expected: >>>%s<<<\nActual: >>>%s<<<\n", expected, substr);
	}
	free(substr);
}

void test_size_is_bigger_than_possible_substr()
{
	char *expected = "la";
	char *actual = ft_substr("hola", 2, 3);
	if(strcmp(expected, actual))
	{
		print_test_fail(4, FUNCTION);
		printf("Expected: >%s<\nActual: >%s<\n", expected, actual);
	}
	free(actual);
}

int main()
{
	test_substr_is_at_the_end();
	test_size_is_bigger_than_substr();
	test_substr_is_in_the_middle();
	test_size_is_bigger_than_possible_substr();
}
