/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:39:50 by esordone          #+#    #+#             */
/*   Updated: 2023/01/19 11:46:30 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int rep_number(int argc, char **argv, int i)
{
	int	p;
	int n;
	int r;

	n = ft_len(argv[i]);
	p = i + 1;
	while (p < argc)
	{
		r = 0;
		while (r <= n && argv[i][r] == argv[p][r])
		{
			if (n == ft_len(argv[p]) && r == n && argv[i][r] - argv[p][r] == 0)
			{
				return (0);
			}
			r++;
		}
		p++;
	}
	return (1);
}

int	max_int(int argc, char **argv, int i)
{
	int n;

	n = ft_atoi(argv[i]);
	while (i < argc)
	{
		if (n >= INT_MAX || n <= INT_MIN)
			return (0);
		i++;
	}
	return (1);	
}

int	not_int(int argc, char **argv, int i)
{
	int	n;

	n = 0;
	if (argc >= 2)
	{
		while (n < (ft_len(argv[i])))
		{
			if (!((argv[i][n] <= 57 && argv[i][n] >= 48) 
				|| (argv[i][n] == '+' || argv[i][n] == '-')))
				return (0);
			n++;
		}
	}
	return (1);
}

int	valid_input(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (not_int(argc,argv, i) == 0)
		{
			write (1, "Error\n", 6);
			return (0);
		}
		if (rep_number(argc, argv, i) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (max_int(argc, argv, i) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}