/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:53:24 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/11 18:12:49 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *array;

	array = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		array[i] = (unsigned char)0;
		i++;
	}
}
