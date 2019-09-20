/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 23:20:47 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/18 18:42:00 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*array1;
	char	*array2;	

	i = 0;
	array1 = (char *)dst;
	array2 = (char *)src;
	if (!array1 && !array2)
		return (dst);
	while (i < n)
	{
		array1[i] = array2[i];
		i++;
	}
	return (dst);
}
