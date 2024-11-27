/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:29:41 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/26 18:44:43 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_isnegative(int n, int len)
{
	char	*str;

	str = ft_calloc(len + 1, sizeof (char));
	if (!str)
		return (NULL);
	n *= -1;
	while (len > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	str[0] = '-';
	return (str);
}

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = intlen(n);
	if (n < 0)
		return (ft_isnegative(n, len));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
