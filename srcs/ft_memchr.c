/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:18:06 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/08 20:23:32 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (*(char *)s + i == (unsigned char)c)
			return ((char *)s + i);
	return (NULL);
}
