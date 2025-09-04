/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:30:36 by fgalvez-          #+#    #+#             */
/*   Updated: 2025/05/22 13:30:36 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_whitespaces(const char *nptr, int *i)
{
	while (nptr[*i] == ' ' || nptr[*i] == '\n' || nptr[*i] == '\t'
		|| nptr[*i] == '\v' || nptr[*i] == '\f' || nptr[*i] == '\r')
		(*i)++;
	return (*i);
}

static int	handle_sign(const char *nptr, int *i)
{
	int	sign;

	sign = 1;
	if (nptr[*i] == '-' || nptr[*i] == '+')
	{
		if (nptr[*i] == '-')
			sign = -1;
		(*i)++;
	}
	return (sign);
}

long	ft_atol(const char *nptr)
{
	long	result;
	int		i;
	int		sign;

	result = 0;
	i = 0;
	sign = 1;
	if (nptr == NULL)
		return (0);
	skip_whitespaces(nptr, &i);
	sign = handle_sign(nptr, &i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
