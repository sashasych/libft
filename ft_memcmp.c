/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:46:49 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/24 18:58:55 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*array1;
	unsigned char	*array2;

	array1 = (unsigned char *)s1;
	array2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (array1[i] != array2[i])
			return (array1[i] - array2[i]);
		i++;
	}
	return (0);
}
