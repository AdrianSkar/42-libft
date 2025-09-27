# `libft`

![42 School](https://img.shields.io/badge/42-Madrid-000000?style=flat&logo=42&logoColor=white)
![Score](https://img.shields.io/badge/Score-125%2F100-success)
![Language](https://img.shields.io/badge/Language-C-blue)
![Norminette](https://img.shields.io/badge/Norminette-passing-success)
![License](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)

**libft** is a custom implementation of essential C standard library functions, created as the foundational project of the 42 curriculum. This library serves as a personal toolkit that will be used throughout subsequent C projects.

---
- [📔 Project overview](#-project-overview)
- [📚 Concept guide](#-concept-guide)
- [🔧 Function categories](#-function-categories)
- [💡 Implementation highlights](#-implementation-highlights)
- [📝 Notes](#-notes)
- [🛠️ Compilation and usage](#️-compilation-and-usage)
- [⚖️ License](#️-license)
  
## 📔 Project overview

- **Objective**: Recreate fundamental C library functions to understand their inner workings and build a solid foundation for future projects.
- **Language**: C
- **Compilation**: Uses `gcc` with flags `-Wall -Wextra -Werror`
- **Output**: Static library `libft.a`
- **Functions implemented**: 43 functions total (34 mandatory + 9 bonus)

### Learning objectives

- **Deep understanding of C fundamentals**: Memory management, pointers, string manipulation, and data structures.
- **Algorithm implementation**: Understanding how standard library functions work under the hood.
- **Memory safety**: Proper handling of dynamic memory allocation and deallocation.
- **Code organization**: Creating a well-structured, reusable library with proper documentation.
- **Makefile proficiency**: Building efficient compilation workflows.

### Project requirements

- All functions must be implemented from scratch (no standard library dependencies except for `malloc`, `free`, and `write`)
- Code must follow the 42 Norm (coding standard)
- No memory leaks, segmentation faults, or undefined behavior
- Include comprehensive error handling
- Generate a static library using `ar` command

## 📚 Concept guide

### Core concepts

1. **Memory management**: Understanding heap vs stack allocation, proper use of `malloc` and `free`, preventing memory leaks
2. **Pointer arithmetic**: Navigating memory efficiently and safely
3. **String manipulation**: Working with null-terminated strings, understanding UTF-8 encoding implications  
4. **Linked lists**: Dynamic data structures for efficient insertion and deletion
5. **Type casting**: Safe conversion between different data types
6. **Edge case handling**: Robust functions that handle NULL pointers, empty strings, and boundary conditions
7. **Static library creation**: Packaging functions for reuse in other projects

### Key algorithms implemented

- **String searching**: Implementing efficient substring search
- **Memory operations**: Byte-level memory manipulation with proper overlap handling
- **Numeric conversion**: Converting between strings and integers with proper error handling
- **Dynamic string operations**: Memory-efficient string joining, trimming, and splitting

## 🔧 Function categories

### Character classification and conversion
Functions for testing and converting individual characters:

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Tests for alphabetic character |
| `ft_isdigit` | Tests for decimal digit |
| `ft_isalnum` | Tests for alphanumeric character |
| `ft_isascii` | Tests for ASCII character |
| `ft_isprint` | Tests for printable character |
| `ft_toupper` | Converts to uppercase |
| `ft_tolower` | Converts to lowercase |

### String manipulation
Comprehensive string handling functions:

| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculate string length |
| `ft_strlcpy` | Size-bounded string copying |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | Locate character in string |
| `ft_strrchr` | Locate character in string (reverse) |
| `ft_strncmp` | Compare strings up to n characters |
| `ft_strnstr` | Locate substring in string |
| `ft_strdup` | Duplicate string (with malloc) |
| `ft_substr` | Extract substring |
| `ft_strjoin` | Join two strings |
| `ft_strtrim` | Trim characters from string ends |
| `ft_split` | Split string by delimiter |
| `ft_strmapi` | Apply function to each character with index |
| `ft_striteri` | Iterate through string with function |

### Memory management
Low-level memory manipulation functions:

| Function | Description |
|----------|-------------|
| `ft_memset` | Fill memory with constant byte |
| `ft_bzero` | Zero a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area (handles overlap) |
| `ft_memchr` | Scan memory for character |
| `ft_memcmp` | Compare memory areas |
| `ft_calloc` | Allocate and zero memory |

### Numeric conversion
String to number and number to string conversions:

| Function | Description |
|----------|-------------|
| `ft_atoi` | Convert string to integer |
| `ft_itoa` | Convert integer to string |

### File descriptor operations
Output functions for writing to file descriptors:

| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Output character to file descriptor |
| `ft_putstr_fd` | Output string to file descriptor |
| `ft_putendl_fd` | Output string + newline to file descriptor |
| `ft_putnbr_fd` | Output number to file descriptor |

### Linked list operations (bonus)
Dynamic data structure manipulation:

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new list element |
| `ft_lstadd_front` | Add element at beginning of list |
| `ft_lstadd_back` | Add element at end of list |
| `ft_lstsize` | Count elements in list |
| `ft_lstlast` | Return last element of list |
| `ft_lstdelone` | Delete single element |
| `ft_lstclear` | Delete and free entire list |
| `ft_lstiter` | Apply function to each element |
| `ft_lstmap` | Apply function and create new list |

## 💡 Implementation highlights

### Memory safety features
- **Null pointer protection**: All functions check for NULL inputs where appropriate
- **Buffer overflow prevention**: Size-bounded operations prevent writing beyond allocated memory
- **Overlap handling**: `ft_memmove` correctly handles overlapping memory regions
- **Integer overflow detection**: `ft_calloc` checks for multiplication overflow

### Performance optimizations
- **Efficient algorithms**: Optimized implementations considering time and space complexity
- **Minimal system calls**: Reduced overhead in I/O operations
- **Memory alignment**: Proper memory alignment for optimal performance
- **Loop unrolling**: Strategic optimization in memory operations

### Robust error handling
- **Graceful degradation**: Functions return appropriate values on error conditions
- **Consistent behavior**: Uniform error handling patterns across all functions
- **Edge case coverage**: Comprehensive testing for boundary conditions

## 📝 Notes

### Design decisions
- **Static library approach**: Functions are compiled into `libft.a` for easy integration
- **Consistent naming**: All functions prefixed with `ft_` to avoid naming conflicts
- **Modular organization**: Functions grouped by category in the Makefile
- **Bonus separation**: Linked list functions in separate `_bonus.c` files

### 42 Norm compliance
- **Function length**: Maximum 25 lines per function
- **Line length**: Maximum 80 characters per line
- **Variable naming**: Consistent and descriptive variable names
- **Indentation**: Proper code formatting using tabs

### Testing considerations
- **Unit testing**: Each function tested individually with various inputs
- **Edge cases**: Comprehensive testing of NULL pointers, empty strings, and boundary values
- **Memory testing**: Valgrind integration to ensure no memory leaks
- **Performance testing**: Benchmarking against standard library implementations

## 🛠️ Compilation and usage

### Building the library

```bash
# Compile the mandatory functions
make

# Compile with bonus functions
make bonus

# Clean object files
make clean

# Clean everything (objects + library)
make fclean

# Recompile everything
make re
```

### Integration in projects

```bash
# Compile your project with libft
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program

# Include the header in your C files
#include "libft.h"
```

### Example usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // String operations
    char *str = ft_strdup("Hello, 42!");
    char *trimmed = ft_strtrim(str, " !");
    char **words = ft_split(trimmed, ',');
    
    // Linked list operations
    t_list *list = ft_lstnew(ft_strdup("First"));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Second")));
    
    // Memory cleanup
    ft_lstclear(&list, free);
    free(trimmed);
    free(str);
    // Free words array...
    
    return (0);
}
```

## ⚖️ License

This project is licensed under the [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License](LICENSE).
You're free to study, modify, and share this code for educational purposes, but commercial use is prohibited.

