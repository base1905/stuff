#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[i][i] <= 90)
				i = 100 - i + 48
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
