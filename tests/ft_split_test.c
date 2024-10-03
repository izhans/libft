#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "split"

void test1()
{
	char *s = "";
	char c = 'a';

	char *expected[] = {""};
	char **actual = ft_split(s, c);

	int i = 0;
	while (expected[i])
	{
		printf("expected[%d]: %s actual[%d]: %s\n", i, expected[i], i, actual[i]);
		if (strcmp(expected[i], actual[i]))
			print_test_fail(1, FUNCTION);
	}
}
void test2()
{
	char *s = "hola mundo";
	char c = 0;

	char *expected[] = {"hola mundo"};
	char **actual = ft_split(s, c);

	int i = 0;
	while (expected[i])
	{
		printf("expected[%d]: %s actual[%d]: %s\n", i, expected[i], i, actual[i]);
		if (strcmp(expected[i], actual[i]))
			print_test_fail(1, FUNCTION);
	}
}
void test3()
{
	char *s = "hola mundo";
	char c = ' ';

	char *expected[] = {"hola", "mundo"};
	char **actual = ft_split(s, c);

	int i = 0;
	while (expected[i])
	{
		printf("expected[%d]: %s actual[%d]: %s\n", i, expected[i], i, actual[i]);
		if (strcmp(expected[i], actual[i]))
			print_test_fail(1, FUNCTION);
	}
}



int main()
{
	// test1();
	// test2();
	// test3();

	char *str = "Hola mundo";
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
	// free(res);
	
	return 0;
}
