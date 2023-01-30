/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:07 by esordone          #+#    #+#             */
/*   Updated: 2023/01/19 11:46:32 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_nodo
{
	struct s_nodo	*next;
	int				index;
	int				val;
	int				pos;
}					t_nodo;

/*typedef struct s_experiment
{
	int 	*argc;
	char 	**argv;

	int		i;
}			t_element;*/

//valid input
int	rep_number(int argc, char **argv, int i);
int	max_int(int argc, char **argv, int i);
int	not_int(int argc, char **argv, int i);
int	valid_input(int argc, char **argv);

//info
void	ft_index(t_nodo **a);
void	mostra(t_nodo *a, t_nodo *b);

//lists
t_nodo	*new_lst(int val, int pos);
void    free_malloc(t_nodo **valor, int i);
void	ft_clear_stack(t_nodo **stack);
t_nodo  *last_lst(t_nodo *lst);
void    add_lst_back(t_nodo **lst, t_nodo *new);
int	ft_len(char *s);

#endif
