#include <stdio.h>
#include <string.h>

char	**ft_split(char *str, char *charset);

static void	run_test(char *label, char *str, char *charset, char **expected)
{
	char	**result;
	int		i;

	result = ft_split(str, charset);
	printf("[%s]\n  input: \"%s\" | charset: \"%s\"\n",
		label, str ? str : "NULL", charset ? charset : "NULL");
	i = 0;
	if (!result)
	{
		printf("  result:   NULL\n");
		if (!expected)
			printf("  expected: NULL | PASS\n\n");
		else
			printf("  expected: %s | FAIL\n\n", expected[0]);
		return ;
	}
	while (result[i])
	{
		printf("  result[%d]:   %s\n", i, result[i]);
		if (!expected || !expected[i])
			printf("  expected[%d]: (none) | FAIL\n", i);
		else
			printf("  expected[%d]: %s | %s\n", i, expected[i],
				strcmp(result[i], expected[i]) == 0 ? "PASS" : "FAIL");
		i++;
	}
	if (expected && expected[i])
		printf("  missing expected: %s | FAIL\n", expected[i]);
	printf("\n");
}

int	main(void)
{
	char	*e1[] = {"hello", "world", NULL};
	char	*e2[] = {"one", "two", "three", NULL};
	char	*e3[] = {"hello", NULL};
	char	*e4[] = {"a", "b", "c", NULL};
	char	*e6[] = {"hello", "world", NULL};

	run_test("normal split on space", "hello world", " ", e1);
	run_test("multiple delimiters", "one,two,three", ",", e2);
	run_test("leading delimiters", "   hello", " ", e3);
	run_test("trailing delimiters", "hello   ", " ", e3);
	run_test("multiple delimiter chars", "a,b.c", ",.", e4);
	run_test("empty string", "", " ", NULL);
	run_test("NULL string", NULL, " ", NULL);
	run_test("NULL charset", "hello", NULL, e3);
	run_test("only delimiters", ",,,,", ",", NULL);
	run_test("no delimiters in string", "hello", ",", e3);
	run_test("consecutive delimiters", "hello,,world", ",", e6);
	run_test("single character words", "a b c", " ", e4);
	return (0);
}