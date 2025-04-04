/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:42:19 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 15:04:19 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	char	*dup;
	int		i;
	int		l;

	l = 0;
	i = 0;
	while (src[l])
	{
		l++;
	}
	dup = malloc((l + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s\n", ft_strdup(argv[1]));
	return (0);
}*/