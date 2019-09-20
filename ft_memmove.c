/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:27:20 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/18 19:54:22 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned char	*array1;
	unsigned char	*array2;
	unsigned char	*buf;
	
	if (!dst && !src)
		return (dst);
	array1 = (unsigned char *)dst;
	array2 = (unsigned char *)src;
	buf = (unsigned char *)malloc(len);
	if (buf == NULL)
		return (dst);
	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	free(buf);
	return (dst);
}
