/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:15:27 by bassem            #+#    #+#             */
/*   Updated: 2023/05/31 19:22:47 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    char    i;

    i = 0;
    while(str[i])
    {
        if(str[i] < '0' || str[i] > '5')
        {
            return(0);
        }
        i++;
    }
    return(1);
}


int main()
{
    printf("%d\n", ft_str_is_numeric("123"));
    printf("%d\n", ft_str_is_numeric("fdg"));
    printf("%d\n", ft_str_is_numeric("5"));
    return(0);
}