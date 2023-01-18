/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:07 by esordone          #+#    #+#             */
/*   Updated: 2023/01/18 12:45:03 by esordone         ###   ########.fr       */
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
	struct s_nodo	*next;
	int				index;
	int				val;
	int 			pos;
}					t_nodo;

typedef struct s_stack
{
	struct s_nodo	*first;
	struct s_nodo	*last;
	int				len;
}					t_stack;

/*typedef struct s_experiment
{
	int 	*argc;
	char 	**argv;

	int		i;
}			t_element;*/

t_nodo	*new_lst(int index, int valor, int posicio);
t_nodo	*last_lst(t_nodo *lst);
void	add_lst_back(t_nodo **lst, t_nodo *new);
void	mostra(int argc, char **argv);
int		ft_len(const char *s);

#endif
