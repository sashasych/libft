/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:34:02 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/12 15:51:30 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *array;

	array = (unsigned char*)b;
	i = 0;
	if (len <= 0 || !b)
		return (b);
	while (i < len)
	{
		array[i] = (unsigned char)c;
		i++;
	}
	return 	(b);
}
