/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:37:13 by esordone          #+#    #+#             */
/*   Updated: 2023/01/16 16:52:01 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_input(int argc, char **argv)
{
	int	i;
	int n;
	char **str;

	i = 0;
	n = 0;
	str = argv;
	while (str[i][n])
	{
		n = 0;
		while (n < (argc - 1))
		{
			n++;
			if ((str[i][n] <= 57 && str[i][n] >= 48)
					|| (str[i][n] == '+' || str[i][n] == '-'))
				return (1);
		}
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int i;
	int n;
	t_stack	*stackA;
	//t_list	*stackB;

	i = 0;
	if (argc < 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	//com argv[0] es a.out, al posar ++i ja comenca en argv[1],
	//i va passant fins que aplegue a l'ultim argument
	while (argv[++i])
	{
		n = 0;
		if (valid_input(argc, argv))
		{
			stackA = new_lst(ft_atoi(argv[i]));
			printf("alguna cosa aplega aci %s\n", argv[i]);
			// argc -1 perque el primer es a.out
			while (n < (argc - 1))
			{
				stackA -> next = new_lst(ft_atoi(argv[++i]));
				n++;
			}
		}
	}
	return (0);
}
