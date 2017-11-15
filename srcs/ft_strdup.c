/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:22:15 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 21:12:02 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (!(str = ft_strnew(i)))
		return (NULL);
	ft_strncpy(str, s1, i);
	return (str);
}
