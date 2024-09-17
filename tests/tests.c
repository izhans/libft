#include "../libft.h"
#include <stdio.h>


void test_isalpha()
{
	if (!ft_isalpha('A'))
		printf("Test 1 isalpha fail\n");

	if (!ft_isalpha('h'))
		printf("Test 2 isalpha fail\n");

	if (ft_isalpha('0'))
		printf("Test 3 isalpha fail\n");
	
	if (ft_isalpha('\n'))
		printf("Test 4 isalpha fail\n");
	
}

void test_isdigit()
{
	if (ft_isdigit('\0'))
		printf("Test 1 isdigit fail\n");

	if (ft_isdigit('h'))
		printf("Test 2 isdigit fail\n");

	if (!ft_isdigit('0'))
		printf("Test 3 isdigit fail\n");
	
	if (!ft_isdigit('5'))
		printf("Test 4 isdigit fail\n");
	
}

void test_isalnum()
{
	if (ft_isalnum('\0'))
		printf("Test 1 isalnum fail\n");

	if (ft_isalnum('/'))
		printf("Test 2 isalnum fail\n");

	if (!ft_isalnum('a'))
		printf("Test 3 isalnum fail\n");
	
	if (!ft_isalnum('5'))
		printf("Test 4 isalnum fail\n");
	
}

void test_isascii()
{
	if (ft_isascii(128))
		printf("Test 1 isascii fail\n");

	if (ft_isascii(-2))
		printf("Test 2 isascii fail\n");

	if (!ft_isascii(0))
		printf("Test 3 isascii fail\n");
	
	if (!ft_isascii(127))
		printf("Test 4 isascii fail\n");

	if (!ft_isascii(56))
		printf("Test 5 isascii fail\n");
	
}

void test_isprint()
{
	if (ft_isprint(127))
		printf("Test 1 isprint fail\n");

	if (ft_isprint(30))
		printf("Test 2 isprint fail\n");

	if (!ft_isprint(' '))
		printf("Test 3 isprint fail\n");
	
	if (!ft_isprint(126))
		printf("Test 4 isprint fail\n");
		
	if (!ft_isprint('0'))
		printf("Test 5 isprint fail\n");
	
}

int main()
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
}