/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 09:29:11 by mefische          #+#    #+#             */
/*   Updated: 2025/04/02 09:40:21 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    l;

    l = 'a';
    while (l <= 'z')
    {
        ft_putchar(l);
        l++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}