/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:49:40 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 19:31:13 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*a;

	if (!(a = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		a->content = NULL;
		a->content_size = 0;
	}
	if (content)
	{
		a->content = (void *)malloc(sizeof(content_size));
		write(1, "z", 1);
		ft_memcpy((void *)a->content, content, content_size);
		write(1, "z", 1);
		a->content_size = content_size;
		write(1, "z", 1);
	}
	a->next = NULL;
	return (a);
}
