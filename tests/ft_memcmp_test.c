#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "memcmp"

void test_equal_strings()
{
	char *s1 = "hola\0mundo";
	char *s2 = "hola\0mundo";
	int n = 10;

	if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
		print_test_fail(1, FUNCTION);
}

void test_smaller_s1()
{
	char *s1 = "hola";
	char *s2 = "holb";
	int n = 4;

	if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
		print_test_fail(2, FUNCTION);
}

void test_smaller_s1_but_only_compare_equal_part()
{
	char *s1 = "hola";
	char *s2 = "holb";
	int n = 3;

	if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
		print_test_fail(3, FUNCTION);
}

void test_smaller_s2()
{
	char *s1 = "holc";
	char *s2 = "holb";
	int n = 4;

	if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
		print_test_fail(4, FUNCTION);
}

void test_empty_s1()
{
	char *s1 = "";
	char *s2 = "hola";
	int n = 4;

	if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
		print_test_fail(5, FUNCTION);
}

void test_empty_s2()
{
	char *s1 = "hola";
	char *s2 = "";
	int n = 4;

	if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
		print_test_fail(6, FUNCTION);
}

void test_difference_is_after_null()
{
	char *s1 = "hola\0a1";
	char *s2 = "hola\0b1";
	int n = 8;

	if (memcmp(s1, s2, n) != ft_memcmp(s1, s2, n))
		print_test_fail(7, FUNCTION);
}

int main()
{
	test_equal_strings();
	test_smaller_s1();
	test_smaller_s1_but_only_compare_equal_part();
	test_smaller_s2();
	test_empty_s1();
	test_empty_s2();
	test_difference_is_after_null();
}
