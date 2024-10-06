#include "../libft.h"
#include "_test_functions.c"
#include <string.h>
#include <stdlib.h>

#define FUNCTION "striteri"

void tester(char const *s, void (*f)(unsigned int, char*), char *expected, int test_number)
{
	char *actual = strdup(s);
	ft_striteri(actual, f);
	if (strcmp(expected, actual) != 0)
	{
		printf("\n");
		print_test_fail(test_number, FUNCTION);
		print_expected_vs_actual_str(expected, actual);
	}
	else
	{
		printf("Test %i ok\n", test_number);
	}
	free(actual);
}

void codify(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c += 1;
	else
		*c -= 1;
}

int main()
{
	char const *s;
	void (*f)(unsigned int, char*);
	char *expected;

	s = "55555";
	f = codify;
	expected = "64646";
	
	tester(s, f, expected, 1);
	// tester(s, f, expected, 2);
	// tester(s, f, expected, 3);
	// tester(s, f, expected, 4);


	return 0;
}
