// #include "test_functions.h"
#include "flood_fill.h"

int ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);

}

char **make_area(char **zone)
{
	int i, j, j_len, i_len;


	j_len = ft_strlen(zone[0]);

	i = 0;
	while (zone[i] != NULL)
		i++;
	i_len = i;

	printf("%d x %d\n", j_len, i_len);

	i = 0;

	while (zone[0][i] == '1')
		i++;
	if (zone[0][i] != '1' && zone[0][i])
		write(1, " Map not closed\n", 16);

	i = 1;
	while (i  < i_len )
	{
		j = 1;
		while (j < j_len - 1)
		{
			if (zone[i][j] == '0')
			{	
				if (zone[i - 1][j] == '1' || (zone[i+1] != NULL && zone[i + 1][j] == '1') || 
					zone[i][j - 1] == '1' || zone[i][j + 1] == '1')	
					j++;
				else
				{	
					write(1, " Map not closed\n", 16);
					break;
				}
			}
			if (zone[i+1] == NULL)
			{
				while (zone[i][j] == '1')
					j++;
				if (zone[i][j] != '1' && zone[i][j])
					write(1, "1Map not closed\n", 16);
			}
			j++;
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
        "10010001",
        "10110001",
        "11111111",
		NULL
    };


    area = make_area(zone);
    print_tab(area);
    //flood_fill(area, size, begin);
    //putc('\n');
    //print_tab(area);
    return (0);
}
