#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "memchr"

void test_char_is_in_str()
{
	char *s = "hola caracola";
	char c = 'o';
	int n = 14;

	if (memchr(s, c, n) != ft_memchr(s, c, n))
		print_test_fail(1, FUNCTION);
}

void test_char_is_null_and_is_in_str()
{
	char *s = "hola\0caracola";
	char c = '\0';
	int n = 14;

	if (memchr(s, c, n) != ft_memchr(s, c, n))
		print_test_fail(2, FUNCTION);
}

void test_if_char_is_not_in_str_then_returns_null()
{
	char *s = "hola caracola";
	char c = 'z';
	int n = 10;

	if (memchr(s, c, n) != ft_memchr(s, c, n))
		print_test_fail(3, FUNCTION);
}

void test_wanted_char_is_after_null_char()
{
	char *s = "hola\0caracola";
	char c = 'c';
	int n = 14;

	if (memchr(s, c, n) != ft_memchr(s, c, n))
		print_test_fail(4, FUNCTION);
}

int main()
{
	test_char_is_in_str();
	test_char_is_null_and_is_in_str();
	test_if_char_is_not_in_str_then_returns_null();
	test_wanted_char_is_after_null_char();
}
