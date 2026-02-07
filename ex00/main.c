/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:50:48 by dandrush          #+#    #+#             */
/*   Updated: 2026/02/07 17:19:57 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>
#include "rush01.h"
//#define N 4

int	main(int argc, char **argv)
{
	int	*params;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}

validate_input(argv[1]);

//Validation if the string has 16 digits 1 to 4
if(!validate_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}

//Parsing digits from input
params = parse_input(argv[1]);
if (!params)
{
	write(1, "Error\n", 6);
	return (0);
}

/* Main verification
int	i = 0;
char	dig;
while (params)
{
	if (i < 16)
	{
		dig = params[i] + '0';
		write (1, &dig, 1);
		if (i < 15)
			printf(" ");
		i++;
	}
}
write(1, '\n', 1);
*/

//Fulfilling the matrix
//void	ft_skyscraper(*arr);

free(params);
return (0);
}

