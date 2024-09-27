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

void test_if_bigger_is_null_then_causes_segmentation_fault()
{
	// char *big = NULL;
	// char *little = NULL;
	// size_t len = 5;
	char *result;

	result = 
	ft_strnstr(NULL, "NULL", 1);

	printf("%s\n", result);

	// if (result != NULL)
	// 	print_test_fail(7, FUNCTION);
}

void test_8()
{
    char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
    char    *t;

    t = ft_strnstr(haystack, needle, -1);
	if	(t != haystack + 1)
		print_test_fail(8, FUNCTION);
}

void test_9()
{
    char haystack[30] = "caasa";
	char needle[10] = "asa";
    char    *t;
    char    *t2;

    t = strnstr(haystack, needle, -1);
    t2 = ft_strnstr(haystack, needle, -1);
	if	(t != t2)
	{
		print_test_fail(9, FUNCTION);
   		printf("%s %s\n", t, t2);
   		printf("%p %p\n", &t, &t2);
	}

}

void test_10()
{
	char haystack[] = "abcdefgh";
	char needle[] = "abc";
	size_t n = 2;
    char    *t;
    char    *t2;

    t = strnstr(haystack, needle, n);
    t2 = ft_strnstr(haystack, needle, n);
	if	(t != t2)
	{
		print_test_fail(10, FUNCTION);
   		printf("%s %s\n", t, t2);
   		printf("%p %p\n", &t, &t2);
	}

}

void test_11()
{
	char haystack[] = "abcdefgh";
	char needle[] = "a";
	size_t n = 1;
    char    *t;
    char    *t2;

    t = strnstr(haystack, needle, n);
    t2 = ft_strnstr(haystack, needle, n);
	if	(t != t2)
	{
		print_test_fail(11, FUNCTION);
   		printf("%s %s\n", t, t2);
   		printf("%p %p\n", &t, &t2);
	}

}

void test_12()
{
	char *big = "hello world";
	char *little = "lo"; // 4th pos
	size_t len = 5;
	char *result;

	result = ft_strnstr(big, little, len);

	// printf("%s\n", big + 4);

	if (result != (big + 3))
		print_test_fail(12, FUNCTION);
}

int main()
{
	test_if_little_is_an_empty_string_then_returns_big();
	test_if_little_char_is_not_in_big_then_returns_null();
	test_if_little_char_is_in_big_then_returns_pointer_to_big();
	test_if_little_str_is_in_big_then_returns_pointer_to_big();
	test_if_little_str_is_not_in_big_then_returns_null();
	test_if_little_str_is_bigger_than_big_then_returns_null();
	// // test_if_bigger_is_null_then_causes_segmentation_fault();
	test_8();
	test_9();
	test_10();
	test_11();
	test_12();
}
