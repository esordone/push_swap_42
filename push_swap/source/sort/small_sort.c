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
	ft_index(stack_a);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}
