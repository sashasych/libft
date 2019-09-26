/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 22:02:35 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/26 18:54:21 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*newlst_first;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	newlst_first = f(lst);
	if (!newlst_first)
		return (NULL);
	lst = lst->next;
	newlst = newlst_first;
	while (lst)
	{
		tmp = f(lst);
		if (tmp == NULL)
			return (NULL);
		newlst->next = tmp;
		newlst = tmp;
		lst = lst->next;
	}
	return (newlst_first);
}
