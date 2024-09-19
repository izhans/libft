#include "../libft.h"
#include "_test_functions.c"
#include <stdlib.h>

#define FUNCTION "atoi"

void test_positive_number()
{
	char *nptr = "123";
	if (atoi(nptr) != ft_atoi(nptr))
		print_test_fail(1, FUNCTION);
}

void test_negative_number()
{
	char *nptr = "-123";
	if (atoi(nptr) != ft_atoi(nptr))
		print_test_fail(2, FUNCTION);
}

void test_number_followed_by_chars()
{
	char *nptr = "-123ab4";
	if (atoi(nptr) != ft_atoi(nptr))
		print_test_fail(3, FUNCTION);
}

void test_number_preceded_by_spaces()
{
	char *nptr = " \n\t \v \r \f12";
	if (atoi(nptr) != ft_atoi(nptr))
		print_test_fail(4, FUNCTION);
}

void test_no_number()
{
	char *nptr = "a";
	if (atoi(nptr) != ft_atoi(nptr))
		print_test_fail(5, FUNCTION);
}

void test_number_after_chars()
{
	char *nptr = "a5";
	if (atoi(nptr) != ft_atoi(nptr))
		print_test_fail(6, FUNCTION);
}

void test_positive_number_with_sign()
{
	char *nptr = "+45";
	if (atoi(nptr) != ft_atoi(nptr))
		print_test_fail(7, FUNCTION);
}

int main()
{
	test_positive_number();
	test_negative_number();
	test_number_followed_by_chars();
	test_number_preceded_by_spaces();
	test_no_number();
	test_number_after_chars();
	test_positive_number_with_sign();
}
