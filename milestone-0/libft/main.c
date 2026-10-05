#include <stdio.h>


/* ft_isalpha 
int		ft_isalpha(int c);
int	main(void)
{
    char test1 = 'a';
    char test2 = 'Z';
    char test3 = '5';
    char test4 = '!';

printf("Testing '%c': %d \n", test1, ft_isalpha(test1));
printf("Testing '%c': %d \n", test1, ft_isalpha(test2));
printf("Testing '%c': %d \n", test1, ft_isalpha(test3));
printf("Testing '%c': %d \n", test1, ft_isalpha(test4));

return(0);
}*/

/*-------------------------------------------------------------------*/

/* ft_isdigit 
int	ft_isdigit(int c);
int	main(void)
{
	char test1 = '0';
	int test2 = -3;
	char test4 = 'l';

printf("testing %c : %d \n", test1, ft_isdigit(test1));
printf("testing %d : %d \n", test2, ft_isdigit(test2));
printf("testing %c : %d \n", test4, ft_isdigit(test4));

return (0);
}*/

/*------------------------------------------------------*/

/* ft_isalnum */
int	ft_isalnum(int c);
int	main(void)
{
	 char test1 = '0';
         int test2 = -3;
         char test3 = 'l';
 printf("testing %c : %d \n", test1, ft_isalnum(test1));
printf("testing %d : %d \n", test2, ft_isalnum(test2));
printf("testing %c : %d \n", test3, ft_isalnum(test3));

return (0);
}
/*-----------------------------------------------------------*/
