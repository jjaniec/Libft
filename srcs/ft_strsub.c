/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:20:51 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/11 18:41:36 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char	*ft_strnew(size_t size);

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
