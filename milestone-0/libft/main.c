#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    **ft_split(const char *s, char c);
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
}