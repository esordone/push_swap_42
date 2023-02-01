/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:54:03 by esordone          #+#    #+#             */
/*   Updated: 2023/01/30 12:20:33 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_swap(t_nodo **stack)
{
	int		new_index;
	int		aux;
	t_nodo	*res;

	res = *stack;
	if (res->next == NULL || !stack)
		return ;
	//Faig un swap classic aplicant les llistes (a,b,aux)
	aux = res->next->val;
	new_index = res->next->index;
	res->next->val = res->val;
	res->next->index = res->index;
	res->val = aux;
	res->index = new_index;
}

void	sa(t_nodo **stack)
{
	ft_swap(stack);
	write (1, "sa\n", 3);
}

void	sb(t_nodo **stack)
{
	ft_swap(stack);
	write (1, "sb\n", 3);
}
