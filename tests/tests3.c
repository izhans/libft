#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_memset()
{
	// printed result should be the same
	char buffer[20 + 1];
	char *string;

	memset(buffer, 0, sizeof(buffer));
	string = (char *) memset(buffer,'A', 10);
	printf("\nBuffer contents: %s\n", string);
	memset(buffer+10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer);

	char buffer2[20 + 1];
	char *string2;

	ft_memset(buffer2, 0, sizeof(buffer2));
	string2 = (char *) ft_memset(buffer2,'A', 10);
	printf("\nBuffer contents: %s\n", string2);
	ft_memset(buffer2+10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer2);
}

int main()
{
	test_memset();
}
