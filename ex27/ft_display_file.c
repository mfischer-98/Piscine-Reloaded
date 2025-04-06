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
#define BUF_SIZE 2048

int	ft_display(char **str)
{
	int	fd;
	int	cont;
	int	buf[BUF_SIZE + 1];

	fd = open(*str, O_RDONLY);
	if (fd == -1)
		return (1);
	cont = read(fd, buf, BUF_SIZE);
	while (cont > 0)
	{
		write(1, buf, cont);
		cont = read(fd, buf, BUF_SIZE);
	}
	buf[cont] = '\0';
	if (close(fd) == -1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_display(&argv[1]);
	}
	else if (argc == 1)
		write(2, "File name missing.", 19);
	else if (argc > 2)
		write(2, "Too many arguments.", 20);
	else
		write(2, "Cannot read file.", 18);
	return (0);
}
