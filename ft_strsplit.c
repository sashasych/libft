/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:58:04 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/24 20:51:18 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_words(char **array, int n)
{
	int i;

	i = 0;
	while (i < n)
		free(array[i++]);
	free(array);
	return (0);
}

static char	**ft_split_create(char const *s, char c,
		int word_count, int max_word_len)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	i = 0;
	j = 0;
	if (!(array = (char **)malloc(sizeof(char *) * word_count + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			if (!(array[j] = (char *)malloc(sizeof(char) * max_word_len + 1)))
				return (ft_free_words(array, j));
			while (s[i] != '\0' && s[i] != c)
				array[j][k++] = s[i++];
			array[j++][k] = '\0';
		}
	}
	array[j] = 0;
	return (array);
}

char		**ft_strsplit(char const *s, char c)
{
	int	i;
	int	max_word_len;
	int	word_count;
	int	word_len;

	if (!s || !c)
		return (NULL);
	i = 0;
	word_count = 0;
	max_word_len = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			word_count++;
			word_len = 0;
			while (s[i] != c && s[i++])
				word_len++;
			if (word_len > max_word_len)
				max_word_len = word_len;
		}
	}
	return (ft_split_create(s, c, word_count, max_word_len));
}
