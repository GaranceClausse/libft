/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:24:59 by gclausse          #+#    #+#             */
/*   Updated: 2021/11/30 14:08:55 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*ret;

	if (lst && f)
	{
		ret = NULL;
		while (lst)
		{
			map = ft_lstnew(f(lst->content));
			if (map == NULL)
				ft_lstclear(&ret, del);
			lst = lst->next;
			ft_lstadd_back(&ret, map);
		}
		return (map);
	}
	return (NULL);
}
