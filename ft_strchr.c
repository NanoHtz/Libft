/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:48:02 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 18:48:02 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

//recorre los caracteres de un string, hasta encontrar uno identico a x, entonces devuelve el puntero a ese lugar de memoria.

char ft_strchr(char *str,int x)
{
    int i;

    i = 0;
    while(str[i] != '/0')
    {
        if(str[i] == x)
            return(&str[i]);
        i++;
    }
    return(0);
}
int main()
{
    s1[10]="Hola mundo";
    printf ( "%d\n",ft_strchr(s1,6));
}
