/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:34:48 by jjaniec           #+#    #+#             */
/*   Updated: 2017/11/09 10:19:15 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(int ac, char **av)
{
	char	 tab[5] = "LOLZL";
	char	tab2[5] = "LOLOL";

	printf("%d", ft_memcmp(av[1], av[2], 5));
}
