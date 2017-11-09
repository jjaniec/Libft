/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:51:14 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/08 19:17:04 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	c;

	i = -1;
	while (++i != len)
	{
		c = *((char *)src + i);
		*((char *)dst + i) = c;
	}
}
