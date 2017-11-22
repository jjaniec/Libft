/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:20:51 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/20 20:31:39 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;

	i = -1;
	if (!(ns = ft_strnew(len)) || !(s))
		return (NULL);
	while (++i != len)
	{
		ns[i] = s[(size_t)start];
		start++;
	}
	ns[i] = '\0';
	return (ns);
}
