/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:01:08 by esordone          #+#    #+#             */
/*   Updated: 2023/02/14 16:01:42 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	mira(t_nodo **aa, t_nodo **bb)
{
	t_nodo	*a;
	t_nodo	*b;

	a = *aa;
	b = *bb;
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
		printf("adreca_b = %p\n", b);
		printf("prev = %p\n", b->prev);
        printf("next = %p\n", b->next);
		b = b->next;
	}
	if (b == NULL)
		printf("\n\nHas aplegat al final de la llista B\n\n");
}

void	sort_three(t_nodo **stack)
{
	t_nodo	*first;

	first = (*stack);
	if (is_sorted(first) == 1)
		return ;
	if (first->index > first->next->index && first->index == ft_index_max(stack))
		ra(stack);
	else if (first->next->index > first->index)
		rra(stack);
	if (first->next->index < first->index)
		sa(stack);
}

void	sort_five(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*first;

	first = (*stack_a);
	if (is_sorted(first) == 1)
	{
		return;
	}
	/*if (first->index == 0)
		pb (stack_a, stack_b);*/
	while (first)
	{
		ft_min_first(stack_a);
		pb(stack_a, stack_b);
		first = first->next;
		//printf("la i val aci %i\n", i);
	}
	mira(stack_a, stack_b);
}

//estas fent la funcio min first de utils per posar els dos mes menuts
//en el stack b per ordenar 5 numeros
