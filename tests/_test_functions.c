#include <stdio.h>

void print_test_fail(int test_number, char *function)
{
	printf("Test %i %s fail\n", test_number, function);
}

void print_str(char *str)
{
	printf("%s\n", str);
}

void print_expected_vs_actual_str(char *expected, char *actual)
{
	printf("expected:\n");
	print_str(expected);
	printf("\nactual:\n");
	print_str(actual);
}
