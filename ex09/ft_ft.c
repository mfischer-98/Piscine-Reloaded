/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 09:51:19 by mefische          #+#    #+#             */
/*   Updated: 2025/04/02 09:53:37 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int x;

    x = 82;
    ft_ft(&x);
    printf("%d", x);
}