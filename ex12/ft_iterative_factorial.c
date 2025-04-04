/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:21:10 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 11:54:52 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}
/*
int	main(void)
{
	int	x;

	x = 5;
	printf("Result: %d\n", ft_iterative_factorial(x));
}*/