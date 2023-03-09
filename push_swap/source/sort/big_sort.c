/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:38:39 by esordone          #+#    #+#             */
/*   Updated: 2023/03/07 12:47:47 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	big_sort(t_nodo **stack_a, t_nodo **stack_b, int chunks)
{
	int	cut;

	cut = chunks / 2;
	while ((*stack_a)->next)
	{
		pb(stack_a, stack_b);
		(*stack_a) = (*stack_a)->next;
	}
}
