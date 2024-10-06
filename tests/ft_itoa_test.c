#include "../libft.h"
#include "_test_functions.c"
#include <string.h>
#include <stdlib.h>

void tester(int n, char *expected, int test_number)
{
	char *actual = ft_itoa(n);
	if (strcmp(expected, actual) != 0)
	{
		printf("\n");
		print_test_fail(test_number, "itoa");
		print_expected_vs_actual_str(expected, actual);
	}
	else
	{
		printf("Test %i ok\n", test_number);
	}
}

int main()
{
	tester(0, "0", 1);
	tester(5, "5", 2);
	tester(15, "15", 3);
	tester(605, "605", 4);

	tester(-5, "-5", 5);
	tester(-45, "-45", 6);
	tester(-450, "-450", 7);

	tester(2147483647, "2147483647", 8); // max int
	tester(-2147483648, "-2147483648", 9); // min int
	
	// this tests are forbidden by the compilator
	// tester(2147483648, "-2147483648", 10); // max int overflow
	// tester(-2147483649, "2147483647", 11); // max int overflow

	return 0;
}
