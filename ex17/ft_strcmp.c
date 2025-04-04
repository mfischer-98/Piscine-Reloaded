/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:21:45 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 11:55:39 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("mine: %d\n", ft_strcmp(argv[1], argv[2]));
		printf("strcmp: %d\n", strcmp(argv[1], argv[2]));
	}
}*/