/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:15:59 by esordone          #+#    #+#             */
/*   Updated: 2023/01/24 12:16:17 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_index(int argc, char **argv, int i)
{
	int	num;
	int	res;

	res = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		printf("dades: %d\n", num);
		if (/*ai ai ai*/ < num)
		{
			printf("entra aci\n");
			res++;
			printf("res val = %d\n", res);
		}
		i++;
		printf("i val = %d\n", i);
	}
    printf(" res = %d\n", res);
	return (res);
}

/*int	max(int *tab, int argc)
{
	int	result;
	int i;

	i = 0;
	result = tab[0];

	while (i < argc)
	{
		if (result < tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return (result);
}*/
