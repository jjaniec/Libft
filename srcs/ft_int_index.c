/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaniec <jjaniec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 17:31:18 by jjaniec           #+#    #+#             */
/*   Updated: 2020/04/03 18:00:36 by jjaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Returns index of $elem if $elem is present in $arr
*/

int			ft_int_index(int *arr, unsigned int arr_size, int elem)
{
	unsigned int		i;

	i = 0;
	while (i != arr_size)
	{
		if (arr[i] == elem)
			return (i);
		i++;
	}
	return (-1);
}
