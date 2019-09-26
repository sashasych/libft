/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 08:39:43 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/24 19:40:14 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!n[i])
		return ((char *)h);
	while (h[i] != '\0' && i < len)
	{
		if (h[i] == n[j])
			while (n[j] != '\0' && h[i + j] == n[j] && i + j < len)
				j++;
		if (n[j] == '\0')
			return ((char *)&h[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
