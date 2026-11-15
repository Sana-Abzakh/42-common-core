#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
# include <stdlib.h>
#include <stddef.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

char *get_next_line(int fd);
size_t	ft_line_len(const char *s);
char	*ft_reminder(char *stash);
char    *fd_reader(int fd, char *stash);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t dsize);
size_t	ft_strlen(const char *s);


#endif