#include "../libft.h"
#include "_test_functions.c"
#include <string.h>
#include <stdlib.h>

#define FUNCTION "strdup"

void test_strdup()
{	
	char s[] = "This is the string";

	char *r1 = strdup(s);
	char *r2 = ft_strdup(s);

	if (memcmp(r1, r2, 19) != 0)
	{
		print_test_fail(1, FUNCTION);
		printf("expected: %s\n", r1);
		printf("actual: %s\n", r2);
	}
	free(r1);
	free(r2);
}

int main()
{
	test_strdup();
}
