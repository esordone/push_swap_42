/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:10:59 by esordone          #+#    #+#             */
/*   Updated: 2023/03/07 12:11:42 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_params(t_nodo **stack_a, t_nodo **stack_b)
{
	int	len;

	len = ft_len_lst((*stack_a));
	if (len <= 5)
		sort_five(stack_a, stack_b);
	if (len <= 20)
		big_sort(stack_a, stack_b, 2);
}
