/*Напишите программу, которая позволяет ввести строку.
Программа затем долж­на заталкивать в стек символы строки
по одному (см. вопрос для самоконтроля под номером 5),
выталкивать символы из стека и, наконец, отображать их.
В ре­зультате символы отображаются в обратном порядке.*/


#include <stdio.h>
#include <string.h>
#define TSIZE 60

char * s_gets(char * st, int n);

int main ()
{
	char input[TSIZE];
	int i;

	puts(" Input please:");
	while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
	{
		printf("\n Your input:\n%s\n", input);
	}

	i = 0;
	while (i < 60)
	{
		printf("%c ", input[i]);
	}

	puts(" Program exited");
	return (0);
}

char * s_gets(char * st, int n)
{
	char *ret_val;
	char *find;

	if ((ret_val = fgets(st, n, stdin)))
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
		continue;
	}
return ret_val;

}