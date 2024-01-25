/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:46:30 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 18:46:30 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

////me piden una funcion que convierta los caracteres de un string en minisculas

int ft_tolower(int x)
{
    if(x >= 'A' && x <= 'Z') // usamos las comillas simples para definir que es un caracter 
        x +=32;
    return(x);
}