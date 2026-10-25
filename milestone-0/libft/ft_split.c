/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:09:02 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/25 10:41:58 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_free_all(char **arr, size_t n)
{
	while (n > 0)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

static int	ft_fill(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[j] = ft_substr(s, start, i - start);
			if (!result[j++])
			{
				ft_free_all(result, j - 1);
				return (0);
			}
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!ft_fill(result, s, c))
		return (NULL);
	return (result);
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