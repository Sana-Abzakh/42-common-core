
*This project has been created as part of the 42 curriculum by sabzakh.*
# get_next_line

## Description
The aim is to write a function that returns **one line** from the fd each time it is called.

The function prototype is:
```c
char *get_next_line (int fd);

```

Each call to `get_next_line()` reads from a file descriptor and returns the next line—including its terminating `\n` character if one is present. The final line of a file may not end with a newline, in which case it is still returned as-is, while `NULL` is returned at end-of-file (EOF) or upon an error.

### Key Design & Architecture

* **Allowed functions:** `read`, `malloc`, and `free` only (no `lseek`, no global variables, and no `libft`).
* **Three-stage workflow per call:**
1. **Fill:** Reads chunks of `BUFFER_SIZE` bytes into a scratch buffer (`BUFFER_SIZE + 1` bytes to allow null-termination) and appends them to a `static` stash until a `\n` is found or EOF is reached.
2. **Cut:** Measures the first line (`ft_line_len`, including `\n` if present) and copies it into a newly allocated return string (`ft_strlcpy`).
3. **Keep:** Saves any leftover bytes after the first `\n` as the new `stash` (`ft_reminder`) for subsequent calls, freeing the previous stash.


* **File layout:**
* `get_next_line.h`: Header guard, default `BUFFER_SIZE` (`42`), and function prototypes (`get_next_line`, `ft_strchr`, `ft_strjoin`, `ft_strlen`, `ft_strlcpy`, `ft_line_len`).
* `get_next_line.c`: `read_loop` (static helper), `fd_reader`, `ft_reminder`, and `get_next_line`.
* `get_next_line_utils.c`: `ft_strchr`, `ft_strjoin`, `ft_strlen`, `ft_strlcpy`, and `ft_line_len`.



## Instructions

### Compilation

Compile the source files with the standard 42 flags and define `BUFFER_SIZE` at compile time using `-D BUFFER_SIZE=<n>` (works for any positive value, such as `1`, `42`, or `10000000`).

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

```

For debugging and memory leak checks, compile with `-g` and run under Valgrind.

```bash
cc -Wall -Wextra -Werror -g -D BUFFER_SIZE=5 get_next_line.c get_next_line_utils.c
valgrind --leak-check=full ./a.out

```

### Usage

Include `get_next_line.h` in your source file and call `get_next_line(fd)` in a loop until it returns `NULL`. The caller owns each returned line and is responsible for freeing it.

```c
#include "get_next_line.h"

int main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}

```

## Resources

- The read(2) man page — return values (bytes read, 0 for EOF, -1 for error) and the fact that it does not null-terminate the buffer.

- The open(2) man page — file descriptors and flags such as O_RDONLY.

-Tripouille's gnlTester for automated testing across buffer sizes and edge cases.

### Use of AI

AI was used to  trace edge cases and memory ownership rules, review common pitfalls, and format this `README.md`.
