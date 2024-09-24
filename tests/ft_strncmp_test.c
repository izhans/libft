#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "strncmp"

void test_equal_strings()
{
	char *s1 = "hola";
	char *s2 = "hola";
	int n = 4;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(1, FUNCTION);
}

void test_smaller_s1()
{
	char *s1 = "hola";
	char *s2 = "holb";
	int n = 4;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(2, FUNCTION);
}

void test_smaller_s1_but_only_compare_equal_part()
{
	char *s1 = "hola";
	char *s2 = "holb";
	int n = 3;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(3, FUNCTION);
}

void test_smaller_s2()
{
	char *s1 = "holc";
	char *s2 = "holb";
	int n = 4;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(4, FUNCTION);
}

void test_empty_s1()
{
	char *s1 = "";
	char *s2 = "hola";
	int n = 4;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(5, FUNCTION);
}

void test_empty_s2()
{
	char *s1 = "hola";
	char *s2 = "";
	int n = 4;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(6, FUNCTION);
}

void test_n_overflows_strings()
{
	char *s1 = "hola";
	char *s2 = "hola";
	int n = 40;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(7, FUNCTION);
}

void test_returns_zero_when_size_is_zero()
{
	char *s1 = "zyxbcdefgh";
	char *s2 = "abcdwxyz";
	int n = 0;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
		print_test_fail(8, FUNCTION);
}

void test_returns_correctly_unsigned_char_difference()
{
	char *s1 = "test\161";
	char *s2 = "test\0";
	int n = 6;

	if (strncmp(s1, s2, n) != ft_strncmp(s1, s2, n))
	{
		print_test_fail(9, FUNCTION);
		printf("%d %d\n", strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
		printf("%s %s\n", s1, s2);
		printf("%lu %lu\n", strlen(s1), strlen(s2));
	}
}

int main()
{
	test_equal_strings();
	test_smaller_s1();
	test_smaller_s1_but_only_compare_equal_part();
	test_smaller_s2();
	test_empty_s1();
	test_empty_s2();
	test_n_overflows_strings();
	test_returns_zero_when_size_is_zero();
	test_returns_correctly_unsigned_char_difference();
}
