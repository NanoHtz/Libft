/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:14:16 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 18:14:16 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t i;

    dest = (char *) malloc(ft_strlen(s1) + 1);
    if(!dest)
        return(NULL);
    i = 0;
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = 0;
    return(dest);    
}