/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:50:16 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/15 18:48:35 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strnew(size_t size);

int		ft_itoa_slen(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_min_int()
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 12);
	s[0] = '-';
	s[1] = '2';
	s[2] = '1';
	s[3] = '4';
	s[4] = '7';
	s[5] = '4';
	s[6] = '8';
	s[7] = '3';
	s[8] = '6';
	s[9] = '4';
	s[10] = '8';
	s[11] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*s;

	i = ft_itoa_slen(n) - 1;
	if (!(s = (char *)malloc(sizeof(char) * i + 2)))
		return (NULL);
	if ((unsigned int)-n == 2147483648)
		return (ft_itoa_min_int());
	s[i + 1] = '\0';
	if (n < 0)
		s[0] = '-';
	if (n == 0)
		s[i] = '0';
	n = ((n < 0) ? (-n) : (n));
	while (i > ((n > 0) ? (-1) : (0)))
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (s);
}
