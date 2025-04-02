/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:27:53 by mefische          #+#    #+#             */
/*   Updated: 2025/04/02 11:13:43 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int x;

    x = 0;
    if (nb < 0)
        return (0);
    while (x <= nb)
    {
        if (x * x == nb)
            return (x);
        x++;
    }
    return (0);
}

int main(void)
{
    int num;

    num = 16;
    printf("Result: %d", ft_sqrt(num));
    return (0);
}