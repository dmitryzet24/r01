/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:45:26 by dandrush          #+#    #+#             */
/*   Updated: 2026/02/07 17:22:32 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "rush01.h"

int	*parse_input(char *str)
{
	int	*memal;
	int	i;
	int	j;

	memal = malloc(16 * 4);
	i = 0;
	j = 0;
	if (!memal)
		return NULL;
	while(str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			memal[j++] = str[i] - '0';
		}
		i++;
	}
	return (memal);
}
/*
int	main(void)
{
	int	i = 0;
	char	*str = "5 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4";
	int	*res;

	res = parse_input(str);
	while (i < 16)
	{
		printf("%d", res[i]);
		if (i < 15)
			printf(" ");
		i++;
	}
free(res);
}
*/
