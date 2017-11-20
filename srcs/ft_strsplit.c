/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:42:58 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 17:26:04 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len);

int		ft_strcmp(const char *s1, const char *s2);

char	**ft_strsplit_ret_tab0wd(void)
{
	char	**tab0words;

	if (!(tab0words = (char **)malloc(sizeof(char *))))
		return (NULL);
	if (!(tab0words[0] = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	tab0words[0][0] = 0;
	tab0words[0][1] = 0;
	return (tab0words);
}

int		ft_strsplit_s_size(char const *s, char c, int i)
{
	int		cunt;
	int		j;

	j = 0;
	while (i > 0)
	{
		cunt = 0;
		while (s[j] == c && s[j] != '\0')
			j++;
		if (s[j] != c && s[j] != '\0')
		{
			while (s[j] != c && s[j] != '\0')
			{
				++cunt;
				++j;
			}
			i--;
		}
	}
	return (cunt);
}

int		ft_strsplit_tab_nb(char const *s, char c)
{
	int		i;
	int		cunt;

	cunt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			cunt++;
		}
	}
	return (cunt);
}

char	**ft_strsplit_filltabs(char const *s, char c, char **tab)
{
	int		i2;
	int		j;
	int		j2;

	j = 0;
	i2 = 0;
	j2 = 0;
	while (s[i2] != '\0' && j < ft_strsplit_tab_nb(s, c) && j2 > -1) //copilateur linux
	{
		j2 = 0;
		while (s[i2] == c)
			i2++;
		if (s[i2] != '\0')
		{
			tab[j] = ft_strsub(s, i2, ft_strsplit_s_size(s, c, j + 1));
			while (ft_strcmp(tab[j], ft_strsub(s, i2,\
							ft_strsplit_s_size(s, c, j + 1))) != 0)
				tab[j] = ft_strsub(s, i2, ft_strsplit_s_size(s, c, j + 1));
			i2 += ft_strsplit_s_size(s, c, j + 1);
			j += 1;
		}
		i2 += 1;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		tabs;

	if (!(s) || s[0] == '\0')
		return ((!(s)) ? (NULL) : (ft_strsplit_ret_tab0wd()));
	tabs = ft_strsplit_tab_nb(s, c);
	if (!(tab = (char **)malloc(sizeof(char) * tabs + 1)))
		return (NULL);
	tab = ft_strsplit_filltabs(s, c, tab);
	tab = ft_strsplit_filltabs(s, c, tab);
	return (tab);
}
