/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:52:56 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/25 15:28:15 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			result = i;
		i++;
	}
	return (result);
}
