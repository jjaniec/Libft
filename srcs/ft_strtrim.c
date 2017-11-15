/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:08:03 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 12:53:45 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strnew(size_t size);

char	*ft_strsub(char const *s, unsigned int start, size_t len);

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_strlen_nospaces(char const *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (ft_is_space(s[i]) == 1)
		i++;
	while (s[i++] != '\0')
		j++;
	i = i - 2;
	while (ft_is_space(s[i--]))
		j--;
	return (j);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*s2;

	i = 0;
	while (ft_is_space(s[i]) == 1 && s[i] != '\0')
		i++;
	if (s[i] != '\0')
	{
		if (!(s2 = ft_strsub(s, i, ft_strlen_nospaces(s))))
			return (NULL);
		return (s2);
	}
	return ("");
}
