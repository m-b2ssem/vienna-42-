/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isprintable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassem <bassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 00:07:17 by bassem            #+#    #+#             */
/*   Updated: 2023/06/01 00:22:57 by bassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char* str)
{
    while(*str)
    {
        if(*str < 32 || *str > 127)
        {
            return(0);
        }
        str++;
    }
    return(1);
}

int main()
{

    printf("%d\n", ft_str_is_printable("hello word"));
    printf("%d\n", ft_str_is_printable("hello \nword"));
    printf("%d\n", ft_str_is_printable("hello word"));
}