/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:06:51 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 18:06:51 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char*str;
    size_t i;
    unsigned char uc;

    str = (unsigned char *) s;
    uc (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (str[i] == uc)
            return((void *) &str[i]);
        i++;  
    }
    return(NULL);
}