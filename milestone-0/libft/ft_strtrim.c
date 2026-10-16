#include "libft.h"
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed_str = (char *)malloc(end - start + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
	return (trimmed_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;
	char	*result;

    s1 = "   Hellooo,World!   ";
    set = "oo";
    result = ft_strtrim(s1, set);
    if (result)
     {
    printf("Trimmed string: '%s'\n", result);
        free(result);
    }
    return (0);
}
  */
