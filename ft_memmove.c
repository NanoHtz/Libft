/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:48:25 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 12:48:25 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *aux_src;
    char *aux_dst;
    size_t i;

    if (!dst && !src)
        return(NULL);
    aux_dst = (char *) dst;
    aux_src = (char *) src;
    i = 0;

    if(aux_dst > aux_src)
        while (len-- > 0)
            aux_dst[len] = aux_src[len];
        else
        {
            while (i++ < len)
            {
                aux_dst[i] = aux_src[i];
            }
        }
        return(dst);
}