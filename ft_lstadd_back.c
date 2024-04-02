/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:39:36 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/04/02 13:39:36 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tail;

	tail = ft_lstlast(*lst);
	if(!tail)
		*lst = new;
	tail -> next = new;
}
