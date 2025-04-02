/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:19:30 by mefische          #+#    #+#             */
/*   Updated: 2025/04/02 10:27:16 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int res;

    res = 1;
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    if (nb > 1)
    {
        res = nb * ft_recursive_factorial(nb - 1);
    }
    return (res);
}

int main(void)
{
    int x;

    x = 5;
    printf("Result: %d\n", ft_recursive_factorial(x));    
}