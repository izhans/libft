#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_strlen()
{
	char *s;

	s = "Hola";
	if (ft_strlen(s) != strlen(s))
		printf("Test 1 strlen fail\n");
	
	s = "Hola mundo";
	if (ft_strlen(s) != strlen(s))
		printf("Test 2 strlen fail\n");

	
	s = "";
	if (ft_strlen(s) != strlen(s))
		printf("Test 3 strlen fail\n");
	
}

int main()
{
	test_strlen();
}
