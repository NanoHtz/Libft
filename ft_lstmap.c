/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:57:00 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/04/03 10:57:00 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux_lst;
	t_list	*contents;
	void	*ptr;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	aux_lst = NULL;
	while (lst)
	{
		ptr = (*f)(lst->content);
		contents = ft_lstnew(ptr);
		if (!contents)
		{
			(*del)(ptr);
			ft_lstclear(&aux_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&aux_lst, contents);
		lst = lst->next;
	}
	return (aux_lst);
}
