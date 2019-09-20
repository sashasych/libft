/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:50:21 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/20 19:48:51 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int j;
	int len;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (!s[i])
		return ft_strsub(s, i, 0);
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (!i && j != ft_strlen(s) - 1)
		return (ft_strdup(s));
	len = j - i;
	return ft_strsub(s, i, len + 1);
}
