/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:06:36 by babonnet          #+#    #+#             */
/*   Updated: 2024/01/05 15:09:15 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int main(int ac, char **av)
{
    // todo check for double and int max/min
	t_head *head;

	head = stack_init(ac, av);
	if (!head)
		return (1);
    ft_youenn_algorithm(head);
    return (0);
}
