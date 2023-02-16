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
	if (first->index == 0)
	{
		rra(stack);
		sa(stack);
	}
	if (first->index == 1 && first->next->index == 0)
		sa(stack);
	if (first->index == 1 && first->next->index == 2)
		rra(stack);
	if (first->index == 2)
	{
		if (first->next->index == 0)
			ra(stack);
		else
		{
			sa(stack);
			rra(stack);
		}
	}
}

void	sort_four(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*first_a;

	first_a = (*stack_a);
	if (is_sorted(first_a) == 1)
		return ;
	pb(stack_a, stack_b);
	mira(stack_a, stack_b);
	printf("***********************************************\n");
	sort_three(stack_a);
	mira(stack_a, stack_b);
	printf("-----------------------------------------------\n");
	pa(stack_b, stack_a);
	mira(stack_a, stack_b);
	printf("................................................\n");
}
