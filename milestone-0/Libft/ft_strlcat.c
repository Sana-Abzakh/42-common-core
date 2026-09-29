
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	j = 0;
	while (dest[dsize] && j < size)
		j++;
	i = j;
	while(src[j - i] && j + < size)
	{
		dest[j] = src[j - i];
		j++;
	}
	if (i < size)
		dest[j] = '\0';
	return (i + ft_strlen(src));
}

