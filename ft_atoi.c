/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:09:28 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/25 16:35:33 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t			i;
	unsigned long	res;
	unsigned long	overflow;
	int				sign;

	i = 0;
	res = 0;
	overflow = 9223372036854775807;
	while (ft_isspace(str[i]))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((res > overflow || (res == overflow && (str[i] - '0') > 7))
				&& sign == 1)
			return (-1);
		else if ((res > overflow || (res == overflow && (str[i] - '0') > 8))
				&& sign == -1)
			return (0);
		res = res * 10 + (str[i++] - '0');
	}
	return ((int)(res * sign));
}
