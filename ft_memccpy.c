/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:12:11 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/11 19:19:53 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{	
	size_t i;
	unsigned char *array1;
	unsigned char *array2;	

	i = 0;
	array1 = (unsigned char *)dst;
	array2 = (unsigned char *)src;
	while (i < n)
	{ 
		array1[i] = array2[i];
		if (array2[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
