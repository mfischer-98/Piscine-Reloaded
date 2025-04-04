/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:21:38 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 11:55:18 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}
/*
int	main(void)
{
	printf("lenght = %i", ft_strlen("hello"));
	return (0);
}*/
