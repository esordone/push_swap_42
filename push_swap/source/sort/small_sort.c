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
	if (first->index > first->next->index
		&& first->index == ft_index_max(stack))
		ra(stack);
	else if (first->next->index > first->index)
		rra(stack);
	if (first->next->index < first->index)
		sa(stack);
}

void	sort_five(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*first;
	int		second_index;

	first = (*stack_a);
	second_index = ft_index_min(stack_a) + 1;
	if (is_sorted(first) == 1)
		return ;
	while (first)
	{
		ft_min_first(stack_a);
		pb(stack_a, stack_b);
		first = first->next;
	}
	first = (*stack_a);
	while (first->index != second_index)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
