/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:08:07 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/10 14:00:57 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char	*ft_strnew(size_t size);

size_t	ft_strlen(const char *s);

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ns;

	if (!s)
		return (NULL);
	ns = ft_strnew(ft_strlen(s));
	if (!ns)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		ns[i] = (*f)(s[i]);
	ns[i] = '\0';
	return (ns);
}
