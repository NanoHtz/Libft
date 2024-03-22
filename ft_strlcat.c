/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:25:03 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 17:25:03 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (dst_len >= dstsize)
        dst_len = dstsize;
    if (dst_len == dstsize)
        return(dstsize + src_len)
    if (src_len < dstsize - dst_len)
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len -1);
        dst[dstsize - 1] = '\0';
    }
    return(dst_len + src_len);
}