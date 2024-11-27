/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:24:49 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/25 20:37:11 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!str)
		return (NULL);
	ptr = str;
	while (*s1 != '\0')
	{
		*ptr = *s1;
		s1++;
		ptr++;
	}
	while (*s2 != '\0')
	{
		*ptr = *s2;
		s2++;
		ptr++;
	}
	return (str);
}
