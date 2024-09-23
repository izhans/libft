#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "memmove"

void test_dest_and_src_from_different_strs()
{
	char src[] = "Hola";
	char dest[] = "Adios mundo";
	char dest2[] = "Adios mundo";
	int n = 4 * sizeof(char);

	memmove(dest, src, n);
	ft_memmove(dest2, src, n);

	if(memcmp(dest, dest2, n) != 0)
		print_test_fail(1, FUNCTION);
	// printf("expected: %s actual: %s\n", dest, dest2);
}

void test_str_src_and_dest_are_in_the_same_str()
{
	char s[21] = "a shiny white sphere";
	char *src = s + 2;
	char *dest = s + 8;
	char s2[21] = "a shiny white sphere";
	char *src2 = s2 + 2;
	char *dest2 = s2 + 8;

	int n = 5 * sizeof(char);

	memmove(dest, src, n);
	ft_memmove(dest2, src2, n);

	if(memcmp(dest, dest2, n) != 0)
	{
		print_test_fail(2, FUNCTION);
		printf("\texpected: %s actual: %s\n", dest, dest2);
		printf("\tdest dir:\t %p\n\tsrc dir:\t %p\n\n", src, dest);
	}
}

void test_str_do_not_overlap()
{
	char s[16] = "0123456-";
	char s2[16] = "0123456-";
	int n = 7;

	memmove(s, s + 1, n);
	ft_memmove(s2, s2 + 1, n);

	if(memcmp(s, s2, n) != 0)
	{
		print_test_fail(3, FUNCTION);
		printf("expected: %s actual: %s\n", s, s2);
		printf("dest dir:\t %p\nsrc dir:\t %p\n", s, s+1);
	}
}

void test_str_do_overlap()
{
	char s[16] = "0123456-";
	char s2[16] = "0123456-";
	int n = 7;

	memmove(s + 1, s , n);
	ft_memmove(s2 + 1, s2 , n);

	if(memcmp(s, s2, n) != 0)
	{
		print_test_fail(4, FUNCTION);
		printf("expected: %s actual: %s\n", s, s2);
		printf("dest dir:\t %p\nsrc dir:\t %p\n", s+1, s);
	}
}
int main()
{
	test_dest_and_src_from_different_strs();
	test_str_src_and_dest_are_in_the_same_str();
	test_str_do_not_overlap();
	test_str_do_overlap();
}
