/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:18:45 by mefische          #+#    #+#             */
/*   Updated: 2025/04/02 11:22:00 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int l;

    l = 0;
    while (str[l])
    {
        l++;
    }
    return (l);
}

int main(void)
{
    printf("lenght = %i", ft_strlen("hello"));
}