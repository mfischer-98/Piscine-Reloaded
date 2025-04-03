/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:21:23 by mefische          #+#    #+#             */
/*   Updated: 2025/04/03 11:21:26 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	while (x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

int	main(void)
{
	int	num;

	num = 16;
	printf("Result: %d", ft_sqrt(num));
	return (0);
}
