/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 21:16:45 by sabzakh           #+#    #+#             */
/*   Updated: 2026/11/15 21:35:48 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_reminder(char *stash)
{
	char	*reminder;
	size_t	i;
	size_t	j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	reminder = malloc(ft_strlen(stash) - i);
	if (!reminder)
	{
		free(stash);
		return (NULL);
	}
	i++;
	j = 0;
	while (stash[i])
		reminder[j++] = stash[i++];
	reminder[j] = '\0';
	free(stash);
	return (reminder);
}

static char	*read_loop(int fd, char *buf, char *stash)
{
	char	*tmp;
	ssize_t	bytes_read;

	bytes_read = 1;
	while (!ft_strchr(buf, '\n') && bytes_read)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(stash);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		tmp = stash;
		stash = ft_strjoin(tmp, buf);
		free(tmp);
		if (!stash)
			return (NULL);
	}
	return (stash);
}

char	*fd_reader(int fd, char *stash)
{
	char	*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	buf[0] = '\0';
	stash = read_loop(fd, buf, stash);
	free(buf);
	return (stash);
}

size_t	ft_line_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	size_t		len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash || !ft_strchr(stash, '\n'))
		stash = fd_reader(fd, stash);
	if (!stash)
		return (NULL);
	len = ft_line_len(stash);
	line = NULL;
	if (len > 0)
		line = malloc(len + 1);
	if (!line)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	ft_strlcpy(line, stash, len + 1);
	stash = ft_reminder(stash);
	return (line);
}

int	main(void)
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("[%s]", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}