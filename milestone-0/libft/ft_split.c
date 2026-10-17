#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
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


char    **ft_split(const char *s, char c)
{
    char    **result;
    size_t  i;
    size_t  j;
    size_t  start;

    if (!s)
        return (NULL);
    result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
    if (!result)
        return (NULL);
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
            result[j++] = ft_substr(s, start, i - start);
    }
    result[j] = NULL;
    return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char    *s;
    char    c;
    char    **result;
    size_t  i;

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
}*/