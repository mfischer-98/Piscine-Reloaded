/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:12:51 by mefische          #+#    #+#             */
/*   Updated: 2025/04/06 17:08:45 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *filename)
{
	int		file;
	char	character;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (read(file, &character, 1))
	{
		write(1, &character, 1);
	}
	close(file);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
	}
	else
	{
		ft_display_file(argv[1]);
	}
}
