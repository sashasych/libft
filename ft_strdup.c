/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:32:29 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/24 19:03:19 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!(new))
		return (NULL);
	while (i < len)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
