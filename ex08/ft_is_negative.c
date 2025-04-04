/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:20:24 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 14:07:41 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdlib.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}
*/
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_put_char("P");
	}
	else
	{
		ft_put_char("N");
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_is_negative(atoi(argv[1]));
	}
	return (0);
}*/