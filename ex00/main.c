/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:50:48 by dandrush          #+#    #+#             */
/*   Updated: 2026/02/07 14:31:47 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"
#define N 4

//Prototyping
int	validate_input(char *str);
void	ft_skyscraper(void);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}

//int	validate_input(*str)


//if(validate_input(argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}

//void	ft_skyscraper(*arr);

return (0);
}
