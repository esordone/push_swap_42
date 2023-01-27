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

//bubbleSort(array)
//for i <- 1 to indexOfLastUnsortedElement-1
//if leftElement > rightElement
//swap leftElement and rightElement
//end bubbleSort

/*int	ft_index(int argc, char **argv, int i)
{
	int 	indx;
	int		aux;
	int		num;
	int		next_num;

	indx = 0;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		next_num = ft_atoi(argv[i + 1]);
		printf("1 Num %d\n", num);
		printf("1 Next_num %d\n", next_num);
		if (num > next_num)
		{
			aux = num;
			num = next_num;
			next_num = aux;
			printf("Num vale %d\n", num);
			printf("Next_num vale %d\n", next_num);
		}
		i++;
	}
	return (i);
}*/
int	    ft_min(t_nodo **a)
{
	//int	num;
	int	res;
	t_nodo	*tmp;

	res = INT_MAX;
	tmp = *a;
	//while (i < argc)
	while (tmp)
	{
		//num = ft_atoi(argv[i]);
		//printf("min es = %d\n", min);
		/*if (res >= num)
		{
			res = num;
		}
		i++;*/
		if (res >= tmp->val)
		{
			res = tmp->val;
		}
		tmp = tmp->next;
		printf("res 1 val = %d\n", res);
	}
	return (res);
}

int	ft_index(t_nodo	**a)
{
	int	i;
	int	res;
	t_nodo	*tmp;

	//tmp apunta al principi de la llista
	tmp = *a;
	i = 1;
	res = ft_min(a);
	printf("res val = %d\n", res);
	while (tmp)
	{
		if (tmp->val == res)
		{
			tmp->index = i;
		}
		tmp = tmp->next;
		res = ft_min(a/*, res*/);
		printf("res 2 val = %d\n", res);
		i++;
	}
	return (res);
}

/*void	free_malloc(t_nodo **valor, int i)
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
	return (res);
}*/
