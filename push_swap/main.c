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

void mostra(t_nodo *a)
{
	t_nodo *aux;

	aux = a;
	while (aux)
	{
		printf("\nelement %d\n:", aux->val);
		aux = aux->next;
	}
	if (aux == NULL)
	printf("\n\nHas aplegat al final de la llista\n\n");
}

int main(int argc, char **argv)
{
	t_nodo		*a;
	int			n;
	int			i;
	t_nodo		*new_element;
	//t_stack		*a;

	i = 1;
	if (argc < 2)
		return (0);
	//com argv[0] es a.out, al posar ++i ja comenca en argv[1],
	//i va passant fins que aplegue a l'ultim argument
	// el 1 es el index que s'ha de fer encara
	a = new_lst(1, ft_atoi(argv[i]), i);
	n = 0;
	if (valid_input(argc, argv) == 1)
	{
		// argc -1 perque el primer es a.out
		while (n < (argc - 1))
		{
			//el 1 es l'index que encara no esta fet
			new_element = new_lst(1, ft_atoi(argv[i]), i);
			add_lst_back(&a, new_element);
			n++;
			mostra(new_element);
		}
	}
	/*a = (t_stack *)malloc(sizeof(t_stack));
	if (!a)
		return (0);
	a.first = primer;
	printf("------------------------\n");
    printf("first = %p\n", a.first);
    printf("last = %p\n", a.last);
    printf("size = %i\n", a.size);
    printf("------------------------\na\n");
    while (a.first)
    {
        printf("dir = %p\n", a.first);
        printf("val = %i\n", a.first->val);
        printf("ind = %i\n", a.first->index);
        printf("pos = %i\n", a.first->pos);
        printf("prev = %p\n", a.first->prev);
        printf("next = %p\n\n", a.first->next);
        a.first = a.first->next;
    }
    printf("------------------------\n");*/
/*
    printf("------------------------\nb\n");
    printf("first = %p\n", b.first);
    printf("last = %p\n", b.last);
    printf("size = %i\n", b.size);
    printf("------------------------\n");
    while (b.first)
    {
        printf("dir = %p\n", b.first);
        printf("val = %i\n", b.first->val);
        printf("ind = %i\n", b.first->index);
        printf("pos = %i\n", b.first->pos);
        printf("prev = %p\n", b.first->prev);
        printf("next = %p\n\n", b.first->next);
        b.first = b.first->next;
    }*/
	return (0);
}
