/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:18:48 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/26 16:59:33 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t res;

	j = 0;
	i = ft_strlen(dst);
	res = ft_strlen(src) + i;
	if (size < i)
		return (ft_strlen(src) + size);
	if (size > i + 1)
	{
		while (src[j] != '\0' && j < size - 1 - i)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (res);
}
