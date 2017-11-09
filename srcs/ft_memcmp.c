/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:23:40 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/09 10:19:07 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while ((*((unsigned char *)s1 + i)) == (*((unsigned char *)s2 + i)) && ++i < n)
		;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
