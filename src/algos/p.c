/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:38:13 by pdelanno          #+#    #+#             */
/*   Updated: 2023/06/06 15:49:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_push(t_list **stack_from, t_list **stack_to)
{
	t_list	*new;

	new = (*stack_from)->next;
	(*stack_from)->next = *stack_to;
	*stack_to = *stack_from;
	*stack_from = new;
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_b, stack_a);
	ft_printf("pa\n");
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_printf("pb\n");
	return (0);
}
