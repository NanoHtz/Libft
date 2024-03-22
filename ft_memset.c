/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:25:20 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 11:25:20 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int x, size_t len)
{
    unsigned char *aux;

    aux = (unsigned char *) c;
    while (len > 0)
    {
        *(aux++) = (unsigned char) a;
        len--;
    }
    return(c);
}