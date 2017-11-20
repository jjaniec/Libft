/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:56:15 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/14 20:03:16 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		a;

	i = 0;
	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && (i + (a - i)) < len)
	{
		a = 0;
		j = 0;
		if (haystack[i] == needle[j])
		{
			a = i;
			while ((i + (a - i)) < len && haystack[a] == needle[j] && needle[j] != '\0')
			{
				a++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
