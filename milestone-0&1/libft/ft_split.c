/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:09:02 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:29:41 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free(char **ssplit, size_t j)
{
	while (j > 0)
		free(ssplit[--j]);
	free(ssplit);
	return (NULL);
}

static size_t	ft_word_length(const char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i + len] != '\0' && s[i + len] != c)
		len++;
	return (len);
}

static char	**ft_fill(char **ssplit, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			length = ft_word_length(s, c, i);
			ssplit[j] = ft_substr(s, i, length);
			if (!ssplit[j])
				return (ft_free(ssplit, j));
			j++;
			i += length;
		}
		else
			i++;
	}
	ssplit[j] = 0;
	return (ssplit);
}

char	**ft_split(char const *s, char c)
{
	char	**ssplit;

	if (!s)
		return (NULL);
	ssplit = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!ssplit)
		return (NULL);
	return (ft_fill(ssplit, s, c));
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	c;
	char	**result;
	size_t	i;

	s = "Hello,World!This,is,a,test.";
	c = ',';
	result = ft_split(s, c);
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("Word %zu: '%s'\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}
*/