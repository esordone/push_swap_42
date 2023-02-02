/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:18:05 by esordone          #+#    #+#             */
/*   Updated: 2023/02/01 13:19:24 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	caguentotcollons(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*a;
	t_nodo	*b;

	a = *stack_a;
	b = *stack_b;
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

void	ft_push(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*tmp;
	t_nodo	*first_b;

	first_b = *stack_b;
	if (!stack_b)
		return ;
	tmp = first_b->val;
	ft_add_lst_front(stack_a, first_b);
	first_b = tmp;
	if (first_b)
		first_b->prev = NULL;*/
	caguentotcollons(stack_a, stack_b);
}

void	pb(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_push(stack_a, stack_b);
	write (1, "pb\n", 3);
}

void	pa(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_push(stack_b, stack_a);
	write (1, "pa\n", 3);
}
	/*t_nodo	*tmp;
	t_nodo	*first_b;

	first_b = *stack_b;
	caguentotcollons(stack_a, stack_b);
	printf("\ncaca\n");
	printf("de vaca\n");
	printf("peluda\n");
	if (!stack_b)
		return ;
	printf("\nmoc\n");
	printf("verd\n");
	printf("pringos\n");

	tmp = first_b->next;
	printf("\npet\n");
	printf("flatulent\n");
	printf("sorollos\n");
	ft_add_lst_front(stack_a, first_b);
	printf("\nfins\n");
	printf("als\n");
	printf("collons\n");
	first_b = tmp;
	if (first_b)
	{
		first_b->prev = NULL;
	}*/
