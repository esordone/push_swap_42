/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:37:13 by esordone          #+#    #+#             */
/*   Updated: 2023/01/18 12:44:45 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_input(int argc, char **argv)
{
	int	i;
	int n;
	char **str;

	i = 1;
	n = 0;
	str = argv;
	while (i < (argc - 1))
	{
		n = 0;
		while (n < (ft_len(argv[i])))
		{
			if (!((str[i][n] <= 57 && str[i][n] >= 48)
					|| (str[i][n] == '+' || str[i][n] == '-')))
			{
				write (1, "Error\n", 6);
				return (0);
			}
			n++;
		}
		i++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	t_nodo		*first;
	int			n;
	int			i;
	t_nodo		*new_element;
	t_stack		*a;

	i = 1;
	if (argc < 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	//com argv[0] es a.out, al posar ++i ja comenca en argv[1],
	//i va passant fins que aplegue a l'ultim argument
	// el 1 es el index que s'ha de fer encara
	first = new_lst(1, ft_atoi(argv[i]), i);
	n = 0;
	if (valid_input(argc, argv) == 1)
	{
		// argc -1 perque el primer es a.out
		while (n < (argc - 1))
		{
			//el 1 es l'index que encara no esta fet
			new_element = new_lst(1, ft_atoi(argv[i]), i);
			add_lst_back(&first, new_element);
			n++;
		}
	}
	a = (t_stack *)malloc(sizeof(t_stack));
	if (!a)
		return (0);
	a.first = first;

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
    printf("------------------------\n");

    /*printf("------------------------\nb\n");
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