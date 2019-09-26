/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:27:59 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/24 19:07:34 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*array;

	array = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (array[i] == (unsigned char)c)
			return (&array[i]);
		i++;
	}
	return (NULL);
}
