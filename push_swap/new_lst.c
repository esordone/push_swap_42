/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:39:10 by esordone          #+#    #+#             */
/*   Updated: 2023/01/16 16:32:01 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_lst(int *content)
{
	t_stack	*n;

	n = (t_stack *)malloc(sizeof(t_stack));
	if (!n)
		return (NULL);
	n->content = &content;
	n->next = NULL;
	return (n);
}
