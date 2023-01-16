/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:07 by esordone          #+#    #+#             */
/*   Updated: 2023/01/16 18:55:47 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "./libft/libft.h"

typedef struct s_nodo
{
	int				*content;
	struct s_nodo	*next;
}					t_stack;

typedef struct s_dades
{
	//el llibre
	int *argc;
	char **argv;

	//els capitols
	t_stack *a;
	t_stack *b;

} 			t_dades;

typedef struct s_experiment
{
	int 	*argc;
	char 	**argv;

	int		i;
}			t_element;

t_stack	*new_lst(int content);

#endif
