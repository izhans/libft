#include "../libft.h"
#include "_test_functions.c"
#include <string.h>
#include <bsd/string.h> // compile with flag -lbsd

#define FUNCTION "strlcat"

void test_concat_full_src_str()
{	
	char dst[20] = "Hola mundo";
	char dst2[20] = "Hola mundo";
	char src[] = " cruel";
	int n = strlen(dst) + strlen(src) + 1;

	size_t r1, r2;
	r1 = strlcat(dst, src, n);
	r2 = ft_strlcat(dst2, src, n);

	if (r1 != r2 || memcmp(dst, dst2, strlen(dst) + 1) != 0)
	{
		print_test_fail(1, FUNCTION);
		printf("\tExpected: %s - Actual: %s\n\t", dst, dst2);
		printf("return: %zu - return2: %zu\n\n", r1, r2);
	}
}

void test_concat_part_of_src_str()
{
	char dst[20] = "Hola mundo";
	char dst2[20] = "Hola mundo";
	char src[] = "^^.";
	int n = 13;

	size_t r1, r2;
	r1 = strlcat(dst, src, n);
	r2 = ft_strlcat(dst2, src, n);

	if (r1 != r2 || memcmp(dst, dst2, strlen(dst) + 1) != 0)
	{
		print_test_fail(2, FUNCTION);
		printf("\tExpected: %s - Actual: %s\n\t", dst, dst2);
		printf("return: %zu - return2: %zu\n\n", r1, r2);
	}
}

void test_size_is_bigger_than_wanted_str()
{
	char dst[30] = "Hola mundo";
	char dst2[30] = "Hola mundo";
	char src[] = " increible";
	int n = 30;

	size_t r1, r2;
	r1 = strlcat(dst, src, n);
	r2 = ft_strlcat(dst2, src, n);

	if (r1 != r2 || memcmp(dst, dst2, strlen(dst) + 1) != 0)
	{
		print_test_fail(3, FUNCTION);
		printf("\tExpected: %s - Actual: %s\n\t", dst, dst2);
		printf("return: %zu - return2: %zu\n\n", r1, r2);
	}
}

void test_size_is_smaller_than_src_str()
{
	char dst[30] = "Hola mundo";
	char dst2[30] = "Hola mundo";
	char src[] = " increible";
	int n = 3;

	size_t r1, r2;
	r1 = strlcat(dst, src, n);
	r2 = ft_strlcat(dst2, src, n);

	if (r1 != r2 || memcmp(dst, dst2, strlen(dst) + 1) != 0)
	{
		print_test_fail(4, FUNCTION);
		printf("\tExpected: %s - Actual: %s\n\t", dst, dst2);
		printf("return: %zu - return2: %zu\n\n", r1, r2);
	}
}

void test_size_is_zero()
{
	char dst[30] = "Hola mundo";
	char dst2[30] = "Hola mundo";
	char src[] = " increible";
	int n = 0;

	size_t r1, r2;
	r1 = strlcat(dst, src, n);
	r2 = ft_strlcat(dst2, src, n);

	if (r1 != r2 || memcmp(dst, dst2, strlen(dst) + 1) != 0)
	{
		print_test_fail(5, FUNCTION);
		printf("\tExpected: %s - Actual: %s\n\t", dst, dst2);
		printf("return: %zu - return2: %zu\n\n", r1, r2);
	}
}

void test6()
{
	char dest[] = "abc";
	char dest2[] = "abc";
	char *src = "efgh";
	unsigned int size = 1;

	printf("expected: %zu %s\n", strlcat(dest, src, size), dest);
	printf("actual: %zu %s\n", ft_strlcat(dest2, src, size), dest);
}

int main()
{
	test_concat_full_src_str();
	test_concat_part_of_src_str();
	test_size_is_bigger_than_wanted_str();
	test_size_is_smaller_than_src_str();
	test_size_is_zero();
	test6();
}
