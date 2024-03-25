/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:29:41 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/25 17:46:55 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_negative(long *n)
{
	if (*n >= 0)
		return (0);
	else
	{
		*n = -(*n);
		return (1);
	}
}

int	ft_len(long n)
{
	int	count;
	int	temp_n;

	temp_n = n;
	count = 0;
	if (n == 0)
		return (1);
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		count++;
	}
	if (ft_is_negative(&n))
	{
		count = count + 1;
		return (count);
	}
	else
		return (count);
}

char	*fill_numbers(long n, int i, char *str)
{
	str[i--] = '\0';
	if (ft_is_negative(&n))
	{
		str[0] = '-';
		while (i > 0)
		{
			str[i] = (n % 10) + '0';
			n = n / 10;
			i--;
		}
	}
	else
	{
		while (i >= 0)
		{
			str[i] = (n % 10) + '0';
			n = n / 10;
			i--;
		}
	}
	return (str);
}

char	*ft_is_n_zero(long n)
{
	char	*str;

	str = malloc(2 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = n + '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;
	int		i;
	long	new_n;

	new_n = (size_t)n;
	count = ft_len(new_n);
	i = count;
	if (new_n == 0)
		str = ft_is_n_zero(new_n);
	else
	{
		str = malloc((count + 1) * sizeof(char));
		if (!str)
			return (NULL);
		str = fill_numbers(new_n, i, str);
	}
	return (str);
}
