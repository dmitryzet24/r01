/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:17:37 by dandrush          #+#    #+#             */
/*   Updated: 2026/02/07 15:12:20 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	validate_input(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (!((str[i] >= '1' && str[i] <= '4') || str[i] == ' '))
			return (0);
		if (str[i] >= '1' && str[i] <= '4')
			cnt += 1;
		i++;
	}
	if (cnt != 16)
		return (0);
	return (1);
}
/*
int	main(void)
{
	int	res;

	res = 0;
	res = validate_input("7 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4");
	printf("%d\n", res);

return (0);
}
*/
