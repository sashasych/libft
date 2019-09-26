/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:04:02 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/26 16:55:31 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;

	if (!s1 || !s2)
		return (NULL);
	array = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!array)
		return (NULL);
	ft_strcpy(array, s1);
	ft_strcat(array, s2);
	return (array);
}
