#include "../libft.h"
#include "_test_functions.c"
#include <string.h>
#include <bsd/string.h> // compile with flag -lbsd

#define FUNCTION "strlcpy"

void test_copy_str()
{	
	char source[80] = "This is the source string";
	char target[80] = "This is the target string";
	char target2[80] = "This is the target string";
	int n = sizeof(source);

	size_t r1, r2;
	r1 = strlcpy(target, source, n);
	r2 = ft_strlcpy(target2, source, n);

	if (r1 != r2 || memcmp(target, target2, 25) != 0)
		print_test_fail(1, FUNCTION);
}

void test_copy_part_of_str()
{
	char s[] = "Hola";
	char t[] = "mundo";
	char t2[] = "mundo";
	int n = 2;

	size_t r1, r2;
	r1 = strlcpy(t, s, n);
	r2 = ft_strlcpy(t2, s, n);

	if (r1 != r2 || memcmp(t, t2, 5) != 0)
		print_test_fail(2, FUNCTION);
	
}

void test_size_is_bigger_than_str_len()
{
	char s[] = "Hola";
	char t[12] = "mundo";
	char t2[12] = "mundo";
	int n = 12;

	size_t r1, r2;
	r1 = strlcpy(t, s, n);
	r2 = ft_strlcpy(t2, s, n);

	if (r1 != r2 || memcmp(t, t2, 12) != 0)
		print_test_fail(3, FUNCTION);
	
}

void test_copy_on_an_empty_string()
{
	char s[] = "Hola manolo";
	char t[12] = "";
	char t2[12] = "";
	int n = 12;

	size_t r1, r2;
	r1 = strlcpy(t, s, n);
	r2 = ft_strlcpy(t2, s, n);

	if (r1 != r2 || memcmp(t, t2, 12) != 0)
		print_test_fail(4, FUNCTION);
}

int main()
{
	test_copy_str();
	test_copy_part_of_str();
	test_size_is_bigger_than_str_len();
	test_copy_on_an_empty_string();
}
