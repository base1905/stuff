#include <stdio.h>
#include "./libft/libft.h"

char *funk(char ii)
{
	char *a;
	char *str;

	int i;
	i = 4;
	int *ptr = &i;
	printf("%d\n", *ptr);
	printf("%p\n", &i);
	printf("%p\n", ptr);
	printf("%p\n", &ptr);

	printf("%-10.5d|\n", 5);

	a = ft_strdup(&ii);
	return (a);
}

int main(void)
{
	int ch;

	ch = '\\';
	funk('\\');
	return(0);
}