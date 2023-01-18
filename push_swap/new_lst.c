/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:32:49 by esordone          #+#    #+#             */
/*   Updated: 2023/01/18 12:02:47 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_lst(int content)
{
	t_stack	*n;

	n = (t_stack *)malloc(sizeof(t_stack));
	if (!n)
		return (NULL);
	n->content = &content;
	n->next = NULL;
	return (n);
}
