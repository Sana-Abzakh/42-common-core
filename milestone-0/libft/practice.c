#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	size_t	len;

	cc = (char)c;
	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		len--;
		if (s[len] == cc)
			return ((char *)&s[len]);
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	const char *str = "Hello world";
	char *res;

	res = ft_strrchr(str, 'l');
	if (res == NULL)
		printf("Not found\n");
	else
		printf("Found at index: %td\n", res - str);
	return (0);
}