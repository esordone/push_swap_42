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

void	ft_push_b(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*tmp;
	t_nodo	*tmp_b;
	t_nodo	*new;

	tmp = *stack_a;
	tmp_b = *stack_b;
	if (!stack_b)
		return ;
	if (stack_a)
	{
		nex->next = tmp;
		tmp = new;
	}

}

/*void	ft_push_a(t_nodo **stack_a, t_nodo **stack_b)
{

}*/

void	pb(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_push_b(stack_a, stack_b);
	write (1, "pb\n", 3);
}

/*void	pa(t_nodo **stack_a, t_nodo **stack_b)
{
	ft_push_a(stack_a, stack_b);
	write (1, "pa\n", 3);
}*/
