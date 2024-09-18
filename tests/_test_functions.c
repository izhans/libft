#include <stdio.h>

void print_test_fail(int test_number, char *function)
{
	printf("Test %i %s fail\n", test_number, function);
}
