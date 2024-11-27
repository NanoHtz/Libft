/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:48:02 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/25 18:15:39 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	unsigned int	i;
	char			xc;

	xc = (char) x;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == xc)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == xc)
		return ((char *) &str[i]);
	return (NULL);
}
