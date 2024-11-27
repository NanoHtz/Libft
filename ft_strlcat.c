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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	d;
	size_t	s;

	index = 0;
	if ((!dst || !src) && dstsize == 0)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= dstsize)
		d = dstsize;
	if (dst == 0 || dstsize == d)
		return (d + s);
	else
	{
		while (d + 1 + index < dstsize && src[index] != '\0')
		{
			dst[d + index] = src[index];
			index++;
		}
		dst[d + index] = '\0';
	}
	return (d + s);
}
