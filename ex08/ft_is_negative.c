/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 09:46:25 by mefische          #+#    #+#             */
/*   Updated: 2025/04/02 09:49:48 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_put_char(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if (n >= 0)
    {
        ft_put_char('P');
    }
    else
    {
        ft_put_char('N');
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_is_negative(atoi(argv[1]));
    }
    return (0);
}