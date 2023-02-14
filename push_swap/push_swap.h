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
    struct s_nodo   *prev;
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
void	ft_clear_stack(t_nodo **stack);
t_nodo  *last_lst(t_nodo *lst);
void    add_lst_back(t_nodo **lst, t_nodo *new);
void	ft_add_lst_front(t_nodo **lst, t_nodo *new);
void    ft_clear_lst(t_nodo **lst);
int	    ft_len(char *s);

//operations
void	sa(t_nodo **stack);
void	sb(t_nodo **stack);
void    ss(t_nodo **stack_a, t_nodo **stack_b);
void	pb(t_nodo **stack_a, t_nodo **stack_b);
void	pa(t_nodo **stack_a, t_nodo **stack_b);
void	rb(t_nodo **stack_b);
void	ra(t_nodo **stack_a);
void	rr(t_nodo **stack_a, t_nodo **stack_b);
void	ft_swap(t_nodo **stack);
void	ft_push(t_nodo **stack_a, t_nodo **stack_b);
void	ft_rotate(t_nodo **stack);

#endif
