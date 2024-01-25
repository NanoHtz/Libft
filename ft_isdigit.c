/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:31:24 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/01/15 17:31:24 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int x)
{
    if(x >= 0 && x <= 9) // utilizamos las comillas simples para indicar que no es asci, si no un digito
        return(1);
    return(0);
}
