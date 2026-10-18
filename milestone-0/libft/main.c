/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 20:36:56 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/11 20:36:59 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* ft_isalpha 
int		ft_isalpha(int c);
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;
	char	test4;
	char	test1;
	int		test2;
	char	test4;
	char	test1;
	int		test2;
	char	test3;

    test1 = 'a';
    test2 = 'Z';
    test3 = '5';
    test4 = '!';
printf("Testing '%c': %d \n", test1, ft_isalpha(test1));
printf("Testing '%c': %d \n", test1, ft_isalpha(test2));
printf("Testing '%c': %d \n", test1, ft_isalpha(test3));
printf("Testing '%c': %d \n", test1, ft_isalpha(test4));
return(0);
}*/
/*-------------------------------------------------------------------*/
/* ft_isdigit 
int		ft_isdigit(int c);
int	main(void)
{
	test1 = '0';
	test2 = -3;
	test4 = 'l';
printf("testing %c : %d \n", test1, ft_isdigit(test1));
printf("testing %d : %d \n", test2, ft_isdigit(test2));
printf("testing %c : %d \n", test4, ft_isdigit(test4));
return (0);
}*/
/*------------------------------------------------------*/
/* ft_isalnum */
/*
int		ft_isalnum(int c);
int	main(void)
{
		test1 = '0';
         test2 = -3;
         test3 = 'l';
 printf("testing %c : %d \n", test1, ft_isalnum(test1));
printf("testing %d : %d \n", test2, ft_isalnum(test2));
printf("testing %c : %d \n", test3, ft_isalnum(test3));
return (0);
}
*/
/*-----------------------------------------------------------*/

/* ft_isascii */

/*
int		ft_isascii(int c);
int	main(void)
{
	int		test2;
	char	test3;

char	test1 = '0';
         test2 = -3;
         test3 = 'l';
 printf("testing %c : %d \n", test1, ft_isascii(test1));
printf("testing %d : %d \n", test2, ft_isascii(test2));
printf("testing %c : %d \n", test3, ft_isascii(test3));
return(0);
}
*/
/*-------------------------------------------------------------*/

/* ft_isprint */
/*
int		ft_isprint(int c);
int	main(void)
{
	char	test1;
	int		test2;
	char	test3;

	test1 = '0';
         test2 = '\n';
         test3 = 'l';
 printf("testing %c : %d \n", test1, ft_isprint(test1));
printf("testing %d : %d \n", test2, ft_isprint(test2));
printf("testing %c : %d \n", test3, ft_isprint(test3));
return(0);
}
*/
/*----------------------------------------------------------------*/

/* ft_memset */
/*
void	*ft_memset(void *b, int c, size_t len);
int	main(void)

    char str_test[] = "Hello World!";
    printf("Before ft_memset: %s\n", str_test);

    ft_memset(str, 'X', 5);
    printf("After ft_memset:  %s\n", str);

    return (0);
}
*/
/*---------------------------------------------------------------*/

/* ft_bzero */
/*
void	ft_bzero(void *s, size_t n);
int	main(void)
{
	char	test_str[];
	char	test_src[];
	char	test_dst[];

	test_str[] = "hello";
	ft_bzero(test_str + 1, 3);
	printf(" hello becomes :%s \n", test_str);
} 
*/
/*-----------------------------------------------------------------*/
/* ft_memcpy */
/*
void	ft_memcpy(void *dst, const void *src, size_t n);
int	main(void)
{
	test_src[] = "hi";
	test_dst[] = "hey";
	ft_memcpy(test_dst, test_src, 2);
	printf("result : %s \n", test_dst);
}
*/
/*--------------------------------------------------------------*/

/* ft_memmove */

/*-------------------------------------------------------------------*/

/* ft_toupper */
/*
int		ft_toupper(int c);
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;
	char	test4;

    test1 = 'a';
    test2 = 'B';
    test3 = '5';
    test4 = '!';
printf("Testing '%c': %c \n", test1, ft_toupper(test1));
printf("Testing '%c': %c \n", test2, ft_toupper(test2));
printf("Testing '%c': %c \n", test3, ft_toupper(test3));
printf("Testing '%c': %c \n", test4, ft_toupper(test4));
}
*/
/*----------------------------------------------------------------*/
/* ft_tolower */

/*
int		ft_tolower(int c);
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;
	char	test4;

    test1 = 'a';
    test2 = 'B';
    test3 = '5';
    test4 = '!';
printf("Testing '%c': %c \n", test1, ft_tolower(test1));
printf("Testing '%c': %c \n", test2, ft_tolower(test2));
printf("Testing '%c': %c \n", test3, ft_tolower(test3));
printf("Testing '%c': %c \n", test4, ft_tolower(test4));
}
*/
/*-------------------------------------------------------------------*/
/* ft_strchr & ft_strchr */
//char    *ft_strchr(const char *s, int c);
/*
char	*ft_strrchr(const char *s, int c);
int	main(void) 
{
    const char *str = "Hello world";
    
    printf("Found at index:%ld\n", ft_strrchr(str, 'l') - str );
    return (0);
}
*/
/*-------------------------------------------------------------------*/
