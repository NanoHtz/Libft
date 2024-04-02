/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:21:24 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/04/02 15:21:24 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*iter;

	iter = lst;
	if (!lst)
		return (NULL);
	else
	{
		while (iter->next)
		{
			(*f)(iter->content);
			iter = iter->next;
		}
		(*f)(iter->content);
	}
}
