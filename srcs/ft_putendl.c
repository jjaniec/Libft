/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:18:58 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/13 15:42:37 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putendl(char const *s)
{
	int		i;

	i = -1;
	if (s)
	{
		while (s[++i] != '\0')
			ft_putchar((unsigned char)s[i]);
		write(1, "\n", 1);
	}
}
