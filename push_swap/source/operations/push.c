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

void	ft_push(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*tmp;
	t_nodo	*aux;

	if (!stack_a ||!*stack_a)
		return ;
	tmp = (*stack_a);
	*stack_a = tmp->next;
	ft_add_lst_front(stack_b, tmp);
	*stack_b = tmp;
	aux = last_lst(*stack_b);
	if (!aux)
		return ;
	(*stack_b)->prev = NULL;
	aux->next = NULL;
}

void	ft_push_a(t_nodo **stack_b, t_nodo **stack_a)
{
	t_nodo	*tmp;
	int		new_index;

	if (!stack_b)
		return ;
	tmp = (*stack_b);
	new_index = (*stack_b)->index;
	*stack_b = tmp->next;
	ft_add_lst_front(stack_a, tmp);
	*stack_a = tmp;
	tmp->index = new_index;
	(*stack_a)->prev = NULL;
}

void	pb(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_push(stack_a, stack_b);
	write (1, "pb\n", 3);
}

void	pa(t_nodo **stack_b, t_nodo **stack_a)
{
	ft_push_a(stack_b, stack_a);
	write (1, "pa\n", 3);
}
