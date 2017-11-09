/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:21:32 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/08 18:51:05 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i != n)
	{
		if (*((char *)src + i) == (unsigned char)c)
			return (dst + i);
		*((char *)dst + i) = *((char *)src + i);
	}
	return (NULL);
}
