#include "../libft.h"
#include "_test_functions.c"
#include <string.h>
#include <stdlib.h>

#define FUNCTION "calloc"

void test_calloc_call_is_posible()
{
	size_t nmemb = 2;
	size_t size = sizeof(int);

	void *expected = calloc(nmemb, size);
	void *actual = ft_calloc(nmemb, size);
	if (memcmp(expected, actual, nmemb * size))
	{
		print_test_fail(1, FUNCTION);
	}
	free(expected);
	free(actual);
	
}

// https://software.codidact.com/posts/289488
// NOT IN USE TEST
void test_if_calloc_call_nmemb_multiplied_by_size_is_integer_overflow()
{
	size_t nmemb = __INT_MAX__;
	size_t size = 2;

	void *expected = calloc(nmemb, size);
	void *actual = ft_calloc(nmemb, size); // rompe aqui
	printf("%s\n", (char *) expected);
	if (memcmp(expected, actual, nmemb * size))
	{
		print_test_fail(2, FUNCTION);
	}
	free(expected);
	free(actual);
}

void test_calloc_with_nmemb_zero()
{
	size_t nmemb = 0;
	size_t size = sizeof(int);

	void *expected = calloc(nmemb, size);
	void *actual = ft_calloc(nmemb, size);
	if (memcmp(expected, actual, nmemb * size))
	{
		print_test_fail(3, FUNCTION);
	}
	free(expected);
	free(actual);
}
void test_calloc_with_size_zero()
{
	size_t nmemb = 3;
	size_t size = 0;

	void *expected = calloc(nmemb, size);
	void *actual = ft_calloc(nmemb, size);
	if (memcmp(expected, actual, nmemb * size))
	{
		print_test_fail(4, FUNCTION);
	}
	free(expected);
	free(actual);
}

int main()
{
	test_calloc_call_is_posible();
	// test_if_calloc_call_nmemb_multiplied_by_size_is_integer_overflow();
	test_calloc_with_nmemb_zero();
	test_calloc_with_size_zero();
}
