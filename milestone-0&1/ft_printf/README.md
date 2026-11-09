*This project has been created as part of the 42 curriculum by sabzakh.*

# ft_printf

## Description

**ft_printf** is a re-implementation of the C standard library function `printf`. The goal is to learn how variadic functions work in C and to build a small, reusable static library, `libftprintf.a`, that prints formatted output using only `write`.

The function prototype is:

```c
int ft_printf(const char *format, ...);
```

It writes to standard output and returns the number of characters printed, like the original `printf`.

### Supported conversions

| Specifier | Output |
|---|---|
| `%c` | a single character |
| `%s` | a string (`(null)` if the pointer is `NULL`) |
| `%p` | a pointer in lowercase hexadecimal, prefixed with `0x` (`(nil)` for `NULL`) |
| `%d` / `%i` | a signed decimal integer |
| `%u` | an unsigned decimal integer |
| `%x` | an unsigned hexadecimal number, lowercase |
| `%X` | an unsigned hexadecimal number, uppercase |
| `%%` | a literal percent sign |

***Only the mandatory part is implemented. The project does not use Libft.***

### Algorithm and data structures

**Algorithm.** `ft_printf` makes a single pass over the format string:

1. Characters that are not part of a conversion are written directly with `write`.
2. When a `%` is found, the next character is passed to a dispatcher, `handle_spec`, which selects the matching print function and pulls the argument out of the `va_list` with `va_arg`.
3. Every print function returns the number of characters it wrote, and `ft_printf` adds these up into the final return value.


**Number printing.** Numbers are printed recursively. Digits come out of a number from the right (`n % base`), but must be printed from the left, so each call first prints the number without its last digit (`n / base`), and then prints its own digit.

- `%d` / `%i`: the value is copied into a `long` before the sign is handled, so that `INT_MIN` can be negated safely.
- `%u`: the same recursion, with base 10 and an `unsigned int`.
- `%x` / `%X`: the same recursion, with base 16.
- `%p`: the pointer is cast to `unsigned long` so the full 64-bit address fits, then printed in base 16 after a `0x` prefix.

**Data structures.**  The project allocates no memory. The two pieces of data used are:

- `va_list`, which tracks the current position in the variable argument list. It is passed to the dispatcher as a pointer (`va_list *`), so that every `va_arg` call advances the one real list.
- A constant lookup string (`"0123456789abcdef"` or `"0123456789ABCDEF"`), indexed by `n % base`. This converts a digit value to its character and avoids special-casing the letters `a` to `f`. The string is chosen by the conversion letter, so `%x` and `%X` share one function.

### Project structure

```
.
├── Makefile
├── ft_printf.h
├── ft_printf.c          
├── ft_print_char.c          
├── ft_print_str.c        
├── ft_print_nbr.c        
├── ft_print_unsigned.c   
├── ft_print_hex.c        
└── ft_print_ptr.c        
```

## Instructions

### Compilation

The project is compiled with `cc` and the flags `-Wall -Wextra -Werror`.

```bash
make        # builds libftprintf.a
make clean  # removes object files
make fclean # removes object files and libftprintf.a
make re     # rebuilds everything from scratch
```

### Usage

Include the header and link against the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number %d, hex %x\n", "world", 42, 255);
    return (0);
}
```

```bash
make
cc -Wall -Wextra -Werror main.c libftprintf.a -o test
./test
```

### Testing

To check the output, the same format string can be passed to both `printf` and `ft_printf`, and the printed text and the return values compared. Edge cases worth testing include `INT_MIN`, `INT_MAX`, `UINT_MAX`, `0`, negative values passed to `%x` and `%u`, a `NULL` string for `%s`, a `NULL` pointer for `%p`, and `%%`.


## Resources

- man page.
- cppreference.com (https://cppreference.com/c/variadic)
- The 42 Norm and the ft_printf subject
- Community testers used to check edge cases, e.g. Tripouille's `printfTester`

### Use of AI

## AI Assistance

AI (Claude) was used for the following tasks:

- Checking `ft_printf.h` for Norm compliance.
- Drafting and proofreading this README.

