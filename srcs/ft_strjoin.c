/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:55:31 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/11 18:46:49 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

size_t	ft_strlen(const char *s);

char	*ft_strnew(size_t size);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = -1;
	if (!(s1) || !(s2))
		return (NULL);
	if (!(s = ft_strnew((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[++j] != '\0')
		s[i++] = s1[j];
	j = -1;
	while (s2[++j] != '\0')
		s[i++] = s2[j];
	s[i] = '\0';
	return (s);
}
