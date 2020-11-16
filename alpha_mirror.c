#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
/* not printing simbols different from a-z, A-Z and space */

	int i;
	int new_i;
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				new_i = argv[1][i] * -1  + 155;
				write(1, &new_i, 1);
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				new_i = argv[1][i] * -1  + 219;
				write(1, &new_i, 1);
			}
			else if (argv[1][i] == ' ')
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
