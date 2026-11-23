#include "push_swap.h"

double	disorder(char *a)
{
	size_t	mis;
	size_t	pairs;
	size_t	size_a;
	size_t	i;
	size_t	j;

	mis = 0;
	pairs = 0;
	size_a = ft_strlen(a);
	if (size_a < 2)
		return (0.0);
	i = 0;
	while (i < (size_a - 1))
	{
		j = i + 1;
		while (j < size_a)
		{
			pairs++;
			if (a[i] > a[j])
				mis += 1;
			j++;
		}
		i++;
		j++;
	}
	return ((double)mis / pairs);
}
