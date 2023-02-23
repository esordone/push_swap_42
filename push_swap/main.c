/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:37:13 by esordone          #+#    #+#             */
/*   Updated: 2023/02/13 12:45:09 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mostra(t_nodo *a, t_nodo *b)
{
	while (a)
	{
		printf("\nelement: %d\n", a->val);
		printf("ind = %i\n", a->index);
        printf("pos = %i\n", a->pos);
		printf("adreca = %p\n", a);
		printf("prev = %p\n", a->prev);
        printf("next = %p\n", a->next);
		a = a->next;
	}
	if (a == NULL)
		printf("\n\nHas aplegat al final de la llista A\n\n");
	while (b)
	{
		printf("\nelement: %d\n", b->val);
		printf("ind = %i\n", b->index);
        printf("pos = %i\n", b->pos);
		printf("adreca = %p\n", b);
		printf("prev = %p\n", b->prev);
        printf("next = %p\n", b->next);
		b = b->next;
	}
	if (b == NULL)
		//printf("\n\nHas aplegat al final de nodo\n\n");
		printf("\n\nHas aplegat al final de la llista B\n\n");
}

int main(int argc, char **argv)
{
	t_nodo		*a;
	t_nodo		*b;
	t_nodo		*first;
	int			n;
	int			i;
	t_nodo		*nodo;

	i = 1;
	b = NULL;
	if (argc < 2)
		return (0);
	else
	{
		n = 0; // son los nodos
		if (valid_input(argc, argv) == 1)
		{
			// argc -1 perque el primer es a.out
			while (n < (argc - 1))
			{
				//com argv[0] es a.out, al posar ++i ja comenca en argv[1],
				//i va passant fins que aplegue a l'ultim argument
				if (!a)
					a = new_lst(ft_atoi(argv[i]), i);
				else
				{
					nodo = new_lst(ft_atoi(argv[i]), i);
					if (n == 0)
						first = nodo;
					//mostra(a, nodo);
					add_lst_back(&a, nodo);
				}
				i++;
				n++;
				//nodo = NULL;
				//mostra(a, nodo);
			}
		ft_index(&a);
		//ft_divide(&a);
		sort_five(&a, &b);
		//sort_three(&a);
		mostra(a, b);
		}
	}
	ft_clear_lst(&a);
	ft_clear_lst(&b);
	return (0);
}
