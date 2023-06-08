/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:37:28 by pdelanno          #+#    #+#             */
/*   Updated: 2023/06/06 15:53:38 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_reverse_rotate(t_list **stack)
{
	t_list	*top;
	t_list	*bottom;

	if ((ft_lstsize(*stack) < 2))
		return (0);
	top = *stack;
	bottom = ft_lstlast(*stack);
	while (top->next->next)
		top = top->next;
	top->next = NULL;
	bottom->next = *stack;
	*stack = bottom;
	return (0);
}

int	rra(t_list **stack_a)
{
	ft_reverse_rotate(stack_a);
	ft_printf("rra\n");
	return (0);
}

int	rrb(t_list **stack_b)
{
	ft_reverse_rotate(stack_b);
	ft_printf("rrb\n");
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	ft_printf("rrr\n");
	return (0);
}
