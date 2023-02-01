/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:37:13 by esordone          #+#    #+#             */
/*   Updated: 2023/01/19 11:41:41 by esordone         ###   ########.fr       */
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
        printf("next = %p\n", b->next);
		a = b->next;
	}
	if (b == NULL)
		printf("\n\nHas aplegat al final de la llista B\n\n");
}

void	ft_clear_stack(t_nodo **stack)
{
	if (!stack || !(*stack))
		return ;
	ft_clear_stack(&(*stack)->next);
	free(*stack);
	*stack = NULL;
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
				//el 1 es l'index que encara no esta fet
				//com argv[0] es a.out, al posar ++i ja comenca en argv[1],
				//i va passant fins que aplegue a l'ultim argument
				if (!a)
					a = new_lst(ft_atoi(argv[i]), i);
				else
				{
					nodo = new_lst(ft_atoi(argv[i]), i);
					if (n == 0)
						first = nodo;
						//first es un puntero a nodo, que es una estructura
					add_lst_back(&a, nodo);
				}
				i++;
				n++;
			}
		ft_index(&a);
		pb(&a, &b);
		mostra(a, b);
		}
	}
	ft_clear_stack(&a);
	ft_clear_stack(&b);
	return (0);
}
