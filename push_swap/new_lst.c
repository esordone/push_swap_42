/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:32:49 by esordone          #+#    #+#             */
/*   Updated: 2023/01/18 12:44:56 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_lst(int index, int valor, int posicio)
{
	t_stack	*n;

	n = (t_stack *)malloc(sizeof(t_stack));
	if (!n)
		return (NULL);
	n->index = index;
	n->valor = valor;
	n-> posicio = posicio;
	n->next = NULL;
	return (n);
}

int	ft_len(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}