#include <stdio.h>

void funk(int i )
{
 	char s[10000]={'5'};	
	printf("%d\n", i++);
	funk(i);

}


int main()
{
	int i;

	i = 0;
	
	funk(i);	


	return(0);
}
