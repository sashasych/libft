/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:12:06 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/25 15:41:43 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb > 15)
		return (0);
	if (nb > 1)
		while (nb != 1)
		{
			result *= nb;
			nb--;
		}
	return (result);
}
