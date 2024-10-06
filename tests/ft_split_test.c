#include "../libft.h"
#include "_test_functions.c"
#include <string.h>

#define FUNCTION "split"

void print_res(char **res)
{
	if (res == NULL)
	{
		printf("res is null\n");
		exit(0);
	}

	while (*res)
	{
		printf("<%s>\n", *res);
		res++;
	}

	printf("end of res: %s\n", *res);
}

void print_expected_vs_actual_split(char **expected, char **actual)
{
	printf("\nexpected:\n");
	print_res(expected);
	printf("\nactual:\n");
	print_res(actual);
}

void test_str_without_separator()
{
	char *str = "hello!";
	char c = ' ';

	char **expected = (char*[2]){"hello!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(1, FUNCTION);
			printf("[KO] Your split does not work with one word");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with one word :)\n");
}

void test_str_with_separator_in_the_middle()
{
	char *str = "hello world!";
	char c = ' ';

	char **expected = (char*[3]){"hello", "world!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(2, FUNCTION);
			printf("[KO] Your split does not work with 2 words");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with 2 words :)\n");
}

void test_str_with_double_separator_in_the_middle()
{
	char *str = "hello  world!";
	char c = ' ';

	char **expected = (char*[3]){"hello", "world!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(3, FUNCTION);
			printf("[KO] Your split does not work with double separator");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with double separator :)\n");
}

void test_str_with_multiple_separator_in_the_middle()
{
	char *str = "hello          world!";
	char c = ' ';

	char **expected = (char*[3]){"hello", "world!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(4, FUNCTION);
			printf("[KO] Your split does not work with multiple separators");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with multiple separators :)\n");
}

void test_str_with_multiple_separator_at_the_beggining()
{
	char *str = "  hello  world!";
	char c = ' ';

	char **expected = (char*[3]){"hello", "world!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(5, FUNCTION);
			printf("[KO] Your split does not work with multiple separators at beggining");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with multiple separators at beggining :)\n");
}

void test_str_with_multiple_separator_at_the_end()
{
	char *str = "hello  world!       ";
	char c = ' ';

	char **expected = (char*[3]){"hello", "world!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(6, FUNCTION);
			printf("[KO] Your split does not work with multiple separators at end");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with multiple separators at end :)\n");
}

void test_str_with_multiple_separators_everywhere()
{
	char *str = "       hello      world!       ";
	char c = ' ';

	char **expected = (char*[3]){"hello", "world!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(7, FUNCTION);
			printf("[KO] Your split does not work with multiple separators everywhere");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with multiple separators everywhere :)\n");
}

void test_str_with_multiple_words()
{
	char *str = "   hello  my people and my    world !       ";
	char c = ' ';

	char **expected = (char*[8]){"hello", "my", "people", "and", "my", "world", "!", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(8, FUNCTION);
			printf("[KO] Your split does not work with multiple words");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with multiple words :)\n");
}

void test_str_and_null_separator()
{
	char *str = "   hello  my people and my    world !       ";
	char c = 0;

	char **expected = (char*[2]){"   hello  my people and my    world !       ", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(9, FUNCTION);
			printf("[KO] Your split does not work with a null separator");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with a null separator :)\n");
}

void test_empty_str_and_null_separator()
{
	char *str = "";
	char c = 0;

	char **expected = (char*[2]){"", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(10, FUNCTION);
			printf("[KO] Your split does not work with a null separator");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with a null separator :)\n");
}

void test_larger_str()
{
	char *str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char c = ' ';

	char **expected = (char*[13]){"lorem", "ipsum", "dolor", "sit", "amet,", "consectetur", "adipiscing", "elit.", "Sed", "non", "risus.", "Suspendisse", NULL};
	char **actual = ft_split(str, c);
	
	int i = 0;
	while (actual[i])
	{
		if (strcmp(actual[i], expected[i]))
		{
			print_test_fail(11, FUNCTION);
			printf("[KO] Your split does not work with a larger str");
			print_expected_vs_actual_split(expected, actual);
			exit(1);
		}
		i++;
	}
	printf("Your split works with a larger str :)\n");
}

void test_malloc_fail_returns_null()
{
	char *s = "      split       this for   me  !       ";
	char c = ' ';
	
	char **res = ft_split(s, c);

	if (res == NULL)
	{
		printf("test ok fuck paco\n");
		exit(0);
	}
	print_test_fail(1, FUNCTION);
	printf("Your split does not handle malloc failing\n");
	print_res(res);
}

int main()
{
	test_str_without_separator();
	test_str_with_separator_in_the_middle();
	test_str_with_double_separator_in_the_middle();
	test_str_with_multiple_separator_in_the_middle();
	test_str_with_multiple_separator_at_the_beggining();
	test_str_with_multiple_separator_at_the_end();
	test_str_with_multiple_separators_everywhere();
	test_str_with_multiple_words();
	test_str_and_null_separator();
	test_larger_str();

	// #define malloc(size_t) (void *) 0 // put this define in the ft_split.c file
	// test_malloc_fail_returns_null();

	return 0;
}
