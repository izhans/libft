#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "strnstr"

void test_if_little_is_an_empty_string_then_returns_big()
{
	char *big = "hello world";
	char *little = "";
	size_t len = 5;
	char *result;

	result = ft_strnstr(big, little, len);

	if (strcmp(big, result) != 0)
		print_test_fail(1, FUNCTION);
}

void test_if_little_char_is_not_in_big_then_returns_null()
{
	char *big = "hello world";
	char *little = "d";
	size_t len = 5;
	char *result;

	result = ft_strnstr(big, little, len);

	if (result != NULL)
		print_test_fail(2, FUNCTION);
}

void test_if_little_char_is_in_big_then_returns_pointer_to_big()
{
	char *big = "hello world";
	char *little = "o"; // 4th pos
	size_t len = 8;
	char *result;

	result = ft_strnstr(big, little, len);

	// printf("%s\n", big + 4);

	if (result != (big + 4))
		print_test_fail(3, FUNCTION);
}

void test_if_little_str_is_in_big_then_returns_pointer_to_big()
{
	char *big = "hellow world";
	char *little = "world"; // 7th pos
	size_t len = 12;
	char *result;

	result = ft_strnstr(big, little, len);

	// printf("%s\n", big + 7);
	// printf("%s\n", result);

	if (result != (big + 7))
		print_test_fail(4, FUNCTION);
}

void test_if_little_str_is_not_in_big_then_returns_null()
{
	char *big = "hellow world";
	char *little = "worla";
	size_t len = 12;
	char *result;

	result = ft_strnstr(big, little, len);

	// printf("%s\n", result);

	if (result != NULL)
		print_test_fail(5, FUNCTION);
}

void test_if_little_str_is_bigger_than_big_then_returns_null()
{
	char *big = "hi";
	char *little = "hello";
	size_t len = 5;
	char *result;

	result = ft_strnstr(big, little, len);

	// printf("%s\n", result);

	if (result != NULL)
		print_test_fail(6, FUNCTION);
}

int main()
{
	test_if_little_is_an_empty_string_then_returns_big();
	test_if_little_char_is_not_in_big_then_returns_null();
	test_if_little_char_is_in_big_then_returns_pointer_to_big();
	test_if_little_str_is_in_big_then_returns_pointer_to_big();
	test_if_little_str_is_not_in_big_then_returns_null();
	test_if_little_str_is_bigger_than_big_then_returns_null();
}
