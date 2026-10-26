*This project has been created as part of the 42 curriculum by raaribou.*

# Libft

## Description

**Libft** is a custom C library that reimplements useful functions from the C standard library and adds extra utilities for string manipulation, character handling, memory management, output, and linked-list operations.

The goal of this project is to understand how common C functions work internally, practise memory allocation and deallocation, and build a reusable library for future C projects.

## Library Contents

### 1. Libc functions

The following functions are reimplemented with the `ft_` prefix:

- **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String length and memory:** `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **String operations:** `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- **Character conversion:** `ft_toupper`, `ft_tolower`
- **Conversion and allocation:** `ft_atoi`, `ft_calloc`, `ft_strdup`

### 2. Additional functions

- **String creation and manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- **String iteration:** `ft_strmapi`, `ft_striteri`
- **Output to file descriptors:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked-list functions (bonus)

The bonus part uses the following linked-list structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Available operations:

- `ft_lstnew` — create a new node.
- `ft_lstadd_front` — add a node at the beginning.
- `ft_lstsize` — count the nodes.
- `ft_lstlast` — get the last node.
- `ft_lstadd_back` — add a node at the end.
- `ft_lstdelone` — delete one node.
- `ft_lstclear` — delete a node and all its successors.
- `ft_lstiter` — apply a function to every node's content.
- `ft_lstmap` — create a new list by applying a function to each node's content.

## Instructions

### Requirements

- A C compiler (`cc`, `gcc`, or `clang`)
- `make`
- The `ar` archiver

### Compile the library

Clone or download this repository, then run:

```bash
make
```

This should create `libft.a` in the repository root.

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To clean and rebuild:

```bash
make re
```

If your Makefile includes the bonus rule, build the bonus functions with:

```bash
make bonus
```

### Use Libft in another C project

Include the header and link the static library when compiling your program:

```c
#include "libft.h"

int main(void)
{
    /* Example usage */
    return (0);
}
```

Compile from a location where the header and library paths are correct:

```bash
cc -Wall -Wextra -Werror main.c -I/path/to/libft -L/path/to/libft -lft
```

Replace `/path/to/libft` with the path to this repository. You can also compile the library's source files directly while developing, but linking against `libft.a` is the intended use.

## Testing

Test the functions with small programs that cover normal cases, empty strings, null pointers where the function contract permits them, boundary values, and allocation failures where practical. Compare behaviour with the corresponding standard function when appropriate.

External testers can be useful during development, but passing a tester does not replace understanding the implementation or checking the 42 Norm.

## Resources

- `man` pages on Unix/Linux, for example `man strlen`, `man memcpy`, `man atoi`, and `man malloc`
- The C library documentation: https://www.gnu.org/software/libc/manual/
- The C language reference: https://en.cppreference.com/w/c

