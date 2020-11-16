#include<math.h>
#include<stdio.h>

int main()
{
	double a;

	a = 144.019983;

	printf("%f\n", a);
	printf("%f\n", floor(a));
	printf("%d\n", (int)floor(a));
	
	double i = 0.0;	

	i = i / a;

	printf("%f", i);
}
