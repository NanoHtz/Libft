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

char *ft_strrchr(const char *str,int x)
{
    unsigned int i;
    char *r;
    char xc;

    xc = (char) c;
    r = NULL;
    i = 0;
    while(str[i] != '/0')
    {
        if(str[i] == xc)
            r = (char *) &str[i];
        i++;
    }
    if (str[i] == x)
        r = (char *) &str[i];
    return(r);
}