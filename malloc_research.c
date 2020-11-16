/*Problem M1: исследование кучи
• Напишите программу которая будет выделять всё большие по размеру блоки
памяти с помощью malloc
• Начните с десяти байт и удваивайте каждую итерацию
• На какой итерации malloc вернёт NULL?*/


#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	long long  n;
	char *s;

	i = 0;
	n = 1;
	while (n > i)
	{
		s = (char *)malloc(sizeof(char)* 10 * n);
		if (s == NULL)
			printf("NULL\n");
		printf("%d\t%lld\n", i, n);
		i++;
		n = n * 2;
		printf("%lu",sizeof(unsigned long long));
		
		
	}
	unsigned long long j;
	j = 2 ^ 62;
	printf("%llu", j);
	return (0);

}

