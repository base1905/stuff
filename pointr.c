#include <unistd.h>
#include <stdio.h>

void funk(int *i)
{
	(*i) = (*i) * 8 + 15;
}

int main ()
{
	int i;

	i = 1;
	funk(&i);

	write(1, &i, 1);
	printf("%d\n", i);
	return(0);
}
