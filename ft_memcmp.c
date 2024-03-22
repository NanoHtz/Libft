/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:17:53 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 18:17:53 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;
  
    str1 = (unsigned char) *s1;
    str2 = (unsigned char) *s2;
    i = 0;
    while (i < n)
    {
        if ((unsigned char) str1[i] != (unsigned char) str2[i])
            return ((unsigned char) str1[i] - (unsigned char) str2[i]);
    }
    return (0);
}