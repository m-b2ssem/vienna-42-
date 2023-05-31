/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:41:47 by bassem            #+#    #+#             */
/*   Updated: 2023/05/31 19:50:46 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int    i = '0';
    while (str[i])
    {
        if (str[i] < 'A' || str[i] > 'Z')
        {
            return(1);
        }
        i++;
    }
    return(0);
}

int main()
{
    printf("%d\n", ft_str_is_uppercase("Hello"));
    printf("%d\n", ft_str_is_uppercase("HELLO"));
    printf("%d\n", ft_str_is_uppercase("1ello"));
}