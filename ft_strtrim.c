/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:25:56 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/25 23:27:52 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_set(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] != '\0')
	{
		if (!char_set(s1[i], set))
			break ;
		i++;
	}
	while (len >= 0)
	{
		if (!char_set(s1[len], set))
			break ;
		len--;
	}
	return (ft_substr(s1, i, len - i + 1));
}
