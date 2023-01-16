/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:07 by esordone          #+#    #+#             */
/*   Updated: 2023/01/16 14:42:50 by esordone         ###   ########.fr       */
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

#endif
