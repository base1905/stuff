#include <unistd.h>

int main (int argc, char *argv[])
{
	int i, j;
	int mas[255];

	i = 1;
	j = 0;

	if (argc == 3)
	{
		while (mas[j])
		{
			mas[j] = 0;
			j++;
		}
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				if (!mas[(int)argv[i][j]])
				{
					mas[(int)argv[i][j]] = 1;
					write(1, &argv[i][j], 1);		
				}
				j++;
			}
			i++;
		} 
	}	
	write(1, "\n", 1);
	return (0);
}
