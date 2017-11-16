/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:51:14 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/16 20:49:51 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char	*ft_strncpy(char *dst, const char *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0)
		return (dst);
	if (dst <= src)
		return ((char *)ft_strncpy(dst, src, len));
	if (dst > src)
	{
		while ((int)len > -1)
		{
			*((char *)dst + len) = *((char *)src + len);
			len--;
		}
	}
	return (dst);
}
