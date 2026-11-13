*This project has been created as part of the 42 curriculum by raaribou.*

# Libft

## Description

**Libft** is my first C library, built as a static library (`libft.a`). Its goal is to help me understand how common C functions work internally by reimplementing them, to practise memory allocation and deallocation without leaks, and to build a reusable toolbox for future 42 projects.

### Library overview

The library is made of three parts, all compiled with `cc -Wall -Wextra -Werror` and archived with `ar` (no `libtool`). It uses no global variables, and helper functions are `static`.

**Part 1: Libc functions** (same behaviour as the originals, with the `ft_` prefix)

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` (return 1 or 0)
- Character conversion: `ft_toupper`, `ft_tolower`
- Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- Conversion and allocation: `ft_atoi`, `ft_calloc`, `ft_strdup`

**Part 2: Additional functions**

- `ft_substr`: substring of a string (allocated)
- `ft_strjoin`: concatenation of two strings (allocated)
- `ft_strtrim`: copy of a string without the characters of a set at both ends
- `ft_split`: splits a string on a delimiter into a NULL-terminated array of allocated strings
- `ft_itoa`: integer to allocated string (negative numbers handled)
- `ft_strmapi`, `ft_striteri`: apply a function to each character (new string / in place)
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: output to a file descriptor

**Part 3: Linked lists**

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

- `ft_lstnew`: create a node (`next` is `NULL`)
- `ft_lstadd_front`, `ft_lstadd_back`: add a node at the beginning or the end
- `ft_lstsize`: count the nodes (returns `unsigned int`)
- `ft_lstlast`: return the last node
- `ft_lstdelone`: free one node and its content with `del`, not its successors
- `ft_lstclear`: free a node and all its successors, then set the list pointer to `NULL`
- `ft_lstiter`: apply a function to the content of every node
- `ft_lstmap`: build a new list from the results of a function, freeing everything if an allocation fails

## Instructions

### Requirements

- `cc`, `make` and `ar`

### Build

From the root of the repository:

```bash
make          # builds libft.a at the root
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean, then make
```

Running `make` twice does not relink.

### Use the library

Include `libft.h` and link `libft.a`:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, libft!", 1);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

(If the library is in another folder: `cc main.c -I/path/to/libft -L/path/to/libft -lft`.)

## Resources

- `man` pages, e.g. `man 3 memmove`, `man 3 malloc`, `man 3 strlcpy`
- GNU C Library manual: https://www.gnu.org/software/libc/manual/
- C reference: https://en.cppreference.com/w/c
- Stanford CS Education Library, "Linked List Basics" (Nick Parlante)

### Use of AI

I wrote the library functions myself. AI was used as a tutor for:

- **Research:** understanding concepts such as the stack and heap, pointers, struct padding, signed vs unsigned bytes, the compilation steps, and how Makefiles work.
- **Edge cases:** lists of edge cases to test for the string, memory and linked-list functions.
- **Code review and debugging:** pointing out bugs in my own code and explaining AddressSanitizer reports. I made the fixes and tested them.
