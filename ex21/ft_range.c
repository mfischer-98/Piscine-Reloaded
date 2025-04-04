/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:00:05 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 12:08:45 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	i = 0;
	range = (max - min);
	array = malloc(range * sizeof(int));
	if (!array)
		return (NULL);
	while (i <= range && min < max)
	{
		array[i] = min;
		min ++;
		i ++;
	}
	return (array);
}
/*
int	main(void)
{
	ft_range(0, 10);
}*/
