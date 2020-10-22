#include <unistd.h>

int main (int argc, char *argv[])
{
	int i, j;
	int mas[255];
	
	if (argc == 3)
	{
		i = 0;
		while (mas[i])
		{
			mas[i] = 0;
			i++;
		}	
		i = 2;
		while (i > 0)
		{
			j = 0;
			while(argv[i][j])
			{
				if (i == 2 && mas[argv[i][j]] == 0)
					mas[argv[i][j]] = 1;
				else if (i == 1 && mas[argv[i][j]] == 1 )
				{
					mas[argv[i][j]] = 2;
					write(1, &argv[i][j], 1);
				}
				j++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
