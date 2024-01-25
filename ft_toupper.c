/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:39:49 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 18:39:49 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

//me piden una funcion que convierta los caracteres de un string en mayusculas

int ft_toupper(int x)
{
    if(x >= 'a' && x <= 'z') // usamos las comillas simples para definir que es un caracter 
        x -=32;
    return(x);
}