/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:34:54 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/18 23:42:42 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *array;
	size_t i;

	if (!s)
		return (NULL);
	array = ft_strnew(len);
	if (!array)
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = s[start];
		i++;
		start++;
	}
	return (array);
}
