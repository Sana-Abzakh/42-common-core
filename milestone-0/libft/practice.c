#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_len;
	size_t i;

	if (!dst || !src)
		return (NULL);

	src_len = ft_strlen(src);
	i = 0;
	if (dstsize > (src_len + 1))
	{
		src[i] = dst[i];
		i++;
		dstsize--;
	}
	else
	{
		src[(dstsize - 1)] = dst[i];
	}
	return (src_len);
}