/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:52:26 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 18:25:29 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <unistd.h>

int		ft_strlen(char *str);

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	if (size >= (size_t)ft_strlen((char *)dst))
	{
		ft_strncat(dst, src, size - (size_t)ft_strlen((char *)dst - 1));
		return ((size_t)ft_strlen((char *)dst) + (size_t)ft_strlen((char *)src));
	}
	return (size + (size_t)ft_strlen((char *)src));
}
