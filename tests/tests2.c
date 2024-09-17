#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

void test_toupper()
{
	char c;

	c = 'a';
	if (toupper(c) != ft_toupper(c))
		printf("Test 1 toupper fail\n");
	
	c = 'h';
	if (toupper(c) != ft_toupper(c))
		printf("Test 2 toupper fail\n");
	
	c = 'B';
	if (toupper(c) != ft_toupper(c))
		printf("Test 3 toupper fail\n");

	c = '/';
	if (toupper(c) != ft_toupper(c))
		printf("Test 4 toupper fail\n");

}

void test_tolower()
{
	char c;

	c = 'A';
	if (tolower(c) != ft_tolower(c))
		printf("Test 1 tolower fail\n");
	
	c = 'h';
	if (tolower(c) != ft_tolower(c))
		printf("Test 2 tolower fail\n");
	
	c = 'B';
	if (tolower(c) != ft_tolower(c))
		printf("Test 3 tolower fail\n");

	c = '/';
	if (tolower(c) != ft_tolower(c))
		printf("Test 4 tolower fail\n");

}

void test_strchr()
{
	char *s;
	char c;

	s = "hola caracola";
	c = 'o';
	if (strchr(s, c) != ft_strchr(s, c))
		printf("Test 1 strchr fail\n");
	
	s = "AaAaA";
	c = 'A';
	if (strchr(s, c) != ft_strchr(s, c))
		printf("Test 2 strchr fail\n");
	
	s = "Nada";
	c = 'B';
	if (strchr(s, c) != ft_strchr(s, c))
		printf("Test 3 strchr fail\n");

	s = "null";
	c = '\0';
	if (strchr(s, c) != ft_strchr(s, c))
		printf("Test 4 strchr fail\n");

}

void test_strrchr()
{
	char *s;
	char c;

	s = "hola caracola";
	c = 'o';
	if (strrchr(s, c) != ft_strrchr(s, c))
		printf("Test 1 strrchr fail\n");
	
	s = "AaAaA";
	c = 'A';
	if (strrchr(s, c) != ft_strrchr(s, c))
		printf("Test 2 strrchr fail\n");
	
	s = "Nada";
	c = 'B';
	if (strrchr(s, c) != ft_strrchr(s, c))
		printf("Test 3 strrchr fail\n");

	s = "null";
	c = '\0';
	if (strrchr(s, c) != ft_strrchr(s, c))
		printf("Test 4 strrchr fail\n");

}

int main()
{
	test_strlen();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
}
