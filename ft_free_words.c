/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_words.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:28:54 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/20 22:31:16 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_words(char **array, int n)
{
	int i;

	i = 0;	
	while (i < n)
		free(array[i++]);
	free(array);
	return (0);
}
