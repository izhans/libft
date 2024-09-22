#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_memset_fill_2_times()
{
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

void test_letter_scale()
{
	int size = 5;
	char str[size + 1];
	int i = 0;
	int c = 'a';
	while (i < size)
	{
		ft_memset(str + i, c, size - i);
		i++, c++;
	}

	char *expected = "abcde";
	if (memcmp(str, expected, size +1))
		printf("Test 2 memset fail\n");
	
}

int main()
{
	test_memset_fill_2_times();
	test_letter_scale();
}
