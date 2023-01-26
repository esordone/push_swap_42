/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:15:59 by esordone          #+#    #+#             */
/*   Updated: 2023/01/24 12:16:17 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_index(int argc, char **argv, int i)
{
	t_nodo	**lista_nodos;
	t_nodo	*valor;
	int	num;
	int	res;

	//cree la llista
	lista_nodos = (t_nodo *)malloc(sizeof(t_nodo **)*(argc - 1));
	if (!lista_nodos)
		return (0);
	res = INT_MAX;
	while (i < argc)
	{
		// cree el nodo
		valor = malloc(sizeof (t_nodo *) * (1));
		if (!valor)
		{
			free_malloc(lista_nodos, i - 1);
			return (0);
		}
		valor.index = NULL;
		//replene el nodo
		if (i > 1)
		{
			//estamos en el nodo anterior
			lista_nodos[i - 1]->next = valor;
		}
	}
	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		//printf("dades: %d\n", num);
		//printf("\n el valor de indx inicial = %d\n", indx);
		if (res > num)
		{
			res = num;
			//printf("\n el valor de indx  = %d\n", indx);*/
		}
		i++;
		printf("res val = %d\n", res);
	}
	//printf("indx val = %d\n", indx);
    //printf(" res = %d\n", res);
	return (res);
}

void	free_malloc(t_nodo **valor, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(valor[j]);
		j++;
	}
	free(valor);
}
