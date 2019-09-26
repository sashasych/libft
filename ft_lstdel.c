/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:55:02 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/24 19:28:11 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *next_lst;

	if (!alst || !del)
		return ;
	list = *alst;
	while (list)
	{
		next_lst = list->next;
		del(list->content, list->content_size);
		free(list);
		list = next_lst;
	}
	*alst = NULL;
}
