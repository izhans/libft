#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "ft_memcpy"

void test_copy_str()
{	
	char source[80] = "This is the source string";
	char target[80] = "This is the target string";
	char target2[80] = "This is the target string";

	memcpy(target, source, sizeof(source));
	ft_memcpy(target2, source, sizeof(source));

	if (memcmp(target, target2, 25) != 0)
		print_test_fail(1, FUNCTION);
}

void test_copy_part_of_str()
{
	char s[] = "Hola";
	char t[] = "mundo";
	char t2[] = "mundo";

	memcpy(t, s, 2);
	ft_memcpy(t2, s, 2);

	if (memcmp(t, t2, 5))
		print_test_fail(2, FUNCTION);
	
}

void test_copy_numbers()
{
	char s[] = {1, 2, 3};
	char t[] = {0, 0, 0, 4};
	char t2[] = {0, 0, 0, 4};

	memcpy(t, s, 2);
	ft_memcpy(t2, s, 2);

	if (memcmp(t, t2, 4))
		print_test_fail(3, FUNCTION);
}

int main()
{
	test_copy_str();
	test_copy_part_of_str();
	test_copy_numbers();
}
