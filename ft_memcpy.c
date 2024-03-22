/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:48:21 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 12:48:21 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, syze_t n)
{
    unsigned char *aux_dst;
    unsigned char *aux_src;

    if (dst == (void *)0 && src == (void *)0)
        return(dst);
    aux_dst = (unsigned char *) dst;
    aux_src = (unsigned char *) src;
    while (n > 0)
    {
        *(aux_dst++) = *(aux_src++);
        n--;
    }
    return(dst);  
}