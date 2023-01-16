/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:37:13 by esordone          #+#    #+#             */
/*   Updated: 2023/01/16 10:53:15 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **agrv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		return (0);
		write (1, "\n", 1);
	}
	//com argv[0] es a.out, al posar ++i ja comenca en argv[1],
	//i va passant fins que aplegue a l'ultim argument
	while (argv[++i])
	{

	}
	return (0);
}
