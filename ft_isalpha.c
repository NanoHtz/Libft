/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:31:34 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 17:31:34 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"

// Me piden crear una funcion que compruebe si un int es alfabetico

int ft_isalpha(int x) //funcion de tipo int, ala que se le debe introducir un int y retornar otro int 
{
    if (x >= 65 && x <= 90 || x >= 97 && x <= 122)// condicional "si", si x es mayor o igual que 65 Y menor o igual que 90 O el resto en ascii
        return(1);
    return(0);
}
/*int main()
{
    printf ( "%d\n",ft_isalpha(8));
}*/