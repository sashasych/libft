/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 23:24:18 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/20 23:47:32 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_intlen(int n)
{
	int i;

	i =  1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	size_t len;
	char *str;
	unsigned int number;
	
	len = ft_intlen(n);
	if (n < 0)
		number = (unsigned int)-n;
	else
		number = (unsigned int)n;
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = number % 10 + '0';
	while (number /= 10)
		str[--len] = number % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
