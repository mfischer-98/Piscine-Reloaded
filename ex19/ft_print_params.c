/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:45:20 by mefische          #+#    #+#             */
/*   Updated: 2025/04/02 11:57:33 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0
    if (argc > 0)
    {
        while(i < argc)
        {
            j = 0;
            while(argv[i][j])
            {
                ft_putchar(argv[i][j]);
                j++;
            }
            ft_putchar('\n');
            i++;
        }
    }
    return (0);
}