/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:51:14 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 15:39:15 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst < src)
	{
		while (i != len && src != dst + i)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	len--;
	if (src < dst)
	{
		while ((int)len >= 0)
		{
			*((char *)dst + len) = *((char *)src + len);
			len--;
		}
	}
	return (dst);
}
