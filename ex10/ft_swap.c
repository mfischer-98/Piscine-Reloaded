/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:20:55 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 11:52:29 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	ft_swap(&x, &y);
	printf("x = %d\ny = %d", x, y);
	return (0);
}*/