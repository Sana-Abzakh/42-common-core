#include "push_swap.h"

// is_flag function

static int	is_valid(const char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

//static int	parse_int(const char *s, int *out)

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		printf("no command lines arguments passed \n");
	while (i < argc)
	{
		if (!is_valid(argv[i]))
		{
			printf("error\n");
			return(0);
		}
		i++;
	}
	return (0);
}
