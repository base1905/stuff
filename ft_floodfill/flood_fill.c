// #include "test_functions.h"
#include "flood_fill.h"


char **make_area(char **zone)
{
	int i, j;

	i = 0;
	while (zone[i])
	{
		j = 0;
		while (zone[i][j])
		{
			while (zone[i][j] == '1')
				j++;
			while (zone[i][j] == '0')
				j++;
			if (zone[i][j] == '1' && zone[i][j-1] == '0' && zone[i+1] != NULL )
			{
				if (zone[i+1][j] == '1' || zone[i+1][j-1] == '1' || zone[i+1][j] == '1')
					j++;
				else
					write(1, "Map not closed\n", 15);
			}
		}
		i++;
	}
	return(zone);
	
}
void print_tab(char **zone)
{
	int i;
	int j;


	i = 0;
	while (zone[i])
	{
		j = 0;
		while (zone[i][j])
		{
			write(1, &zone[i][j], 1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
}

int main(void)
{
    char **area;
    t_point size = { 8, 5 };
    t_point begin = { 2, 2 };
    char *zone[] = {
        "11111111",
        "10001001",
        "10001001",
        "10111001",
        "11100001",
		NULL
    };


    area = make_area(zone);
    //print_tab(area);
	print_tab(zone);
    //flood_fill(area, size, begin);
    //putc('\n');
    //print_tab(area);
    return (0);
}
