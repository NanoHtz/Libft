/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:26:07 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/25 21:03:16 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c1;
	int		i;

	i = ft_strlen(s);
	c1 = (char) c;
	while (i >= 0)
	{
		if (s[i] == c1)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
