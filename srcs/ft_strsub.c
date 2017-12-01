/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:20:51 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/29 20:15:09 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;

	i = -1;
	//printf("\nsub : start : %u - len : %zu\n", start, len);
	if (!(ns = ft_strnew(len)) || !(s))
		return (NULL);
	while (++i != len)
	{
		ns[i] = s[(size_t)start];
		start++;
	}
	ns[i] = '\0';
	//printf("strsub return : |%s|\n", ns);
	return (ns);
}
