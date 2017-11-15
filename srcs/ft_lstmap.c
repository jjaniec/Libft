/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:57:46 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 21:11:29 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*a;

	a = list;
	while (lst != NULL)
	{
		list = (t_list *)malloc(sizeof(t_list));
		list = (*f)(lst);
		lst = lst->next;
		list = list->next;
	}
	return (a);
}
