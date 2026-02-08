#include <unistd.h>

int *ft_skyscraper(void)
{
    int matrix[4][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {1, 2, 3, 4}, {4, 3, 2, 1}};
    int rw = 0;
    int cl = 0;
    char    c;

    while (rw < 4)
	{
        cl = 0;
		while (cl < 4)
		{
			c = matrix[rw][cl] + '0';
			write(1, &c, 1);
            if (cl < 3)
                write(1, " ", 1);
			cl++;
		}
        write(1, "\n", 1);
		rw++;
	}	
}

int main(void)
{
    ft_skyscraper();
    return (0);
}