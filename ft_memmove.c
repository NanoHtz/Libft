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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;
	char		*backdst;
	const char	*backsrc;

	dest = dst;
	source = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	else if (dest < source)
	{
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		backdst = dest + (len - 1);
		backsrc = source + (len - 1);
		while (len--)
			*backdst-- = *backsrc--;
	}
	return (dst);
}
