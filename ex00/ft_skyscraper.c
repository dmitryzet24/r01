#include <unistd.h>

void	ft_skyscraper(void)
{
	int	i;
	int	cr;
	char	ci;
	int matrix[2][4] = { {1, 4, 2, 4}, {3, 6, 8, 2} };

	i = 0;
/*	while(i < 16)
	{	
		ci = arr[i] + '0'; 
		write(1, &ci, 1);
		i++;
		write(1, "\n", 1);
	}*/
	while (i < 2)
	{
		cr = 0;
		while (cr < 4)
		{
			ci = matrix[i][cr] + '0';
			write(1, &ci, 1);
			cr++;
		}
		write(1, "\n", 1);
		i++;
	}	
}

int	main(void)
{
/*	int	x;
	int	y;
	int	x1;
	int	y1;

	x = 4;
	y = 4;
	y1 = 1;

	while (y1 <= x)
	{	
		x1 = 1;
		while(x1 <= x)
		{
			write(1, "#", 1);
			x1++;
		}
		write(1, "\n", 1);
		y1++;

		}
		*/
//	int	t[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	ft_skyscraper();
	return 0;
}
