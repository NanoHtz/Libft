/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:48:05 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 17:48:05 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

//me piden una funcion que cuente el numero de caracteres de un string

int ft_strlen(char *str) // debo usar un puntero para señalar al primer caracter del string
{
    int i; //creo un contador, para ir subiendo a medida aque avanza el recorrido

    i=0;
    while( str[i] != '/0') //un while, "mientras", mientras el caracter 0 se distinto que el nulo del final del string, se avanza un caracter
        i++;
    return(i);
}
