/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarneir <gcarneir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:41:20 by gcarneir          #+#    #+#             */
/*   Updated: 2026/02/07 13:42:02 by gcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int visivel(int line[N])
{
	int max;
	int i;
	int vis;
		
	max = 0;          //guarda a maior altura ate agora como n tem nenhuma vai ser 0 
	i = 0;            //vai percorrer o array
	vis = 0;         // e o q vai contar os predios
	while(i < N)     // percorre de 0 a 3
	{
		if(line[i] > max)    // basicamente pergunta se o predio  q esta atual e maior q o predio q ja percorreu se for maior n ta tapado por nenhum outro
	
		{
		max = line[i];  //atualiza para o predio seguir ao percorre a funcao ficar a ser o atual
		vis++;
		}
		i++;
	}
	return(vis);
}
			
		/*o que faz :
		conta quantos predios sao visiveis numa linha/coluna de 4 numeros
		ou seja ele fica visivel se for maior q os outros
		2 1 4 3 os unicos visiveis seriam o 2 e o 4
*/
