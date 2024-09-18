#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_memset()
{
	// printed result should be the same
	int buffer_size = 20 + 1; // 1 for the final '\0'
	char buffer[buffer_size];

	memset(buffer, 0, sizeof(buffer));
	memset(buffer,'A', 10);
	memset(buffer+10, 'B', 10);

	char buffer2[buffer_size];

	ft_memset(buffer2, 0, sizeof(buffer2));
	ft_memset(buffer2,'A', 10);
	ft_memset(buffer2+10, 'B', 10);

	if (memcmp(buffer, buffer2, buffer_size) != 0)
		printf("Test 1 memset fail\n");

}

int main()
{
	test_memset();
}
