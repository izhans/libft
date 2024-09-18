#include "../libft.h"
#include "_test_functions.c"
#include <strings.h>
#include <string.h>

#define FUNCTION "bzero"

void test_delete_all_content()
{
	int len = 10;
	int delete = 10;

	char s[] = "Hola mundo";
	bzero(s, delete);

	char s1[] = "Hola mundo";
	ft_bzero(s1, delete);
	
	if (memcmp(s, s1, len) != 0)
		print_test_fail(1, FUNCTION);
	
}

void test_delete_some_content()
{
	int len = 10;
	int delete = 4;

	char s[] = "Hola mundo";
	bzero(s, delete);

	char s1[] = "Hola mundo";
	ft_bzero(s1, delete);
	
	if (memcmp(s, s1, len) != 0)
		print_test_fail(2, FUNCTION);
}

void test_source_is_alredy_empty()
{
	int len = 1;
	int delete = 1;

	char s[] = "";
	bzero(s, delete);

	char s1[] = "";
	ft_bzero(s1, delete);
	
	if (memcmp(s, s1, len) != 0)
		print_test_fail(3, FUNCTION);
}

void test_size_overflows()
{
	// !!! the original function also crashes, so it is an expected failure
	/*
	int len = 4;
	int delete = 5;

	char s[] = "Hola";

	char s1[] = "Hola";
	printf("s <%s> s1 <%s>\n", s, s1);

	ft_bzero(s1, delete);
	// bzero(s0, delete);
	
	if (memcmp(s, s1, len) != 0)
		print_test_fail(4, FUNCTION);
	printf("s <%s> s1 <%s>\n", s, s1);
	*/
}

void test_number_array()
{
	int len = 10;
	int delete = 5;

	int s[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	bzero(s, delete);

	int s1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_bzero(s1, delete);
	
	if (memcmp(s, s1, len) != 0)
		print_test_fail(5, FUNCTION);
}

int main()
{
	test_delete_all_content();
	test_delete_some_content();
	test_source_is_alredy_empty();
	test_size_overflows();
}
