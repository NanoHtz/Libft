/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:48:25 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/25 23:53:31 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t			i;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)str;
	i = 0;
	if (src2 == 0 && dest2 == 0)
		return (0);
	if (src2 > dest2)
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	while (i < n)
	{
		dest2[n - 1] = src2[n - 1];
		n--;
	}
	return (dest);
}
