/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:26:07 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 19:26:07 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

// Recorre una cadena de strings y devuelve el ultimo lugar de la memoria que sea igual a x

char ft_strrchr(char *str,int x)
{
    int k;

    k = ft_strlen(str);
    while(k != 0)
    {
        if(str[k] == x)
            return(&str[k]);
        k--;
    } 
    return(0);
}