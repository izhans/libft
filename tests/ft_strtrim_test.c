#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "strtrim"

void test1()
{
	char *s1 = "xhola";
	char *set = "x";

	char *expected = "hola";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(1, FUNCTION);
}

void test2()
{
	char *s1 = "xholax";
	char *set = "x";

	char *expected = "hola";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(2, FUNCTION);
}

void test3()
{
	char *s1 = "xholax";
	char *set = "xa";

	char *expected = "hol";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(3, FUNCTION);
}

void test4()
{
	char *s1 = "abcbc";
	char *set = "cba";

	char *expected = "";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(4, FUNCTION);
}

void test5()
{
	char *s1 = "";
	char *set = "nada";

	char *expected = "";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(5, FUNCTION);
}

void test6()
{
	char *s1 = "";
	char *set = "";

	char *expected = "";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(6, FUNCTION);
}

void test7()
{
	char *s1 = "\0";
	char *set = "\0";

	char *expected = "\0";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(7, FUNCTION);
}

void test8()
{
	char *s1 = NULL;
	char *set = "\0";

	char *expected = "\0";
	char *actual = ft_strtrim(s1, set);
	printf("expected: %s actual: %s\n", expected, actual);
	if (strcmp(expected, actual))
		print_test_fail(7, FUNCTION);
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
}
