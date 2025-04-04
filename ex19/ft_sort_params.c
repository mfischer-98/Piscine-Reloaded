/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:19:36 by mefische          #+#    #+#             */
/*   Updated: 2025/04/04 10:33:26 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sortparms(char **s1, char **s2)
{
	if (ft_strcmp(*s1, *s2) > 0)
		ft_swap(s1, s2);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			j = 0;
			while (j < argc - 1)
			{
				if(argv[j + 1])
					ft_sortparms(&argv[i], &argv[i + 1]);
				j++;
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_printstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
