/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:31:49 by bassem            #+#    #+#             */
/*   Updated: 2023/05/31 19:39:40 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    char i = '0';
    while (str[i])
    {
        if (str[i] < 'a' || str[i] > 'z')
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int main()
{
    printf("%d\n", ft_str_is_lowercase("Hello"));
    printf("%d\n", ft_str_is_lowercase("hello"));
    printf("%d\n", ft_str_is_lowercase("1ello"));
}