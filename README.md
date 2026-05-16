*This project has been created as part of the 42 curriculum by bakumcu.*

# FT_PRINTF

## Description

In short, **ft_printf** is a 42 curriculum project that requires you to recreate a simplified version of the standard C `printf` function.

The goal of this project is to understand how variadic functions work in C, how formatted output is handled, and how different data types can be printed using conversion specifiers. By implementing `ft_printf` from scratch, you gain practical experience with `va_list`, recursive number printing, hexadecimal conversion, pointer formatting, and return value management.

This project is also an important step toward building stronger low-level C programming skills while following the 42 Norm coding standards.

## Project Overview

### Main Function

| Function | Description |
|----------|-------------|
| `ft_printf` | Custom implementation of the standard `printf` function |

The `ft_printf` function reads a format string and prints regular characters directly. When it encounters a `%` character, it checks the following conversion specifier and prints the corresponding argument.

Supported prototype:

```c
int ft_printf(const char *format, ...);
```

The function returns the total number of printed characters, similar to the original `printf`.

## Supported Conversions

The mandatory part of the 42 `ft_printf` project requires handling the following conversions:

| Conversion | Description |
|------------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal format |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints a signed integer |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints an unsigned integer in lowercase hexadecimal |
| `%X` | Prints an unsigned integer in uppercase hexadecimal |
| `%%` | Prints a percent sign |

## Function Overview

### Core Printing Functions

| Function | Description |
|----------|-------------|
| `ft_putchar` | Prints a single character |
| `ft_putstr` | Prints a string and handles `NULL` strings |
| `ft_printint` | Prints a signed integer |
| `ft_printuint` | Prints an unsigned integer |
| `ft_print_hex` | Prints a number in hexadecimal format |
| `ft_print_add` | Prints a pointer address |
| `ft_putnbr_base` | Converts and prints a number using a given base |

### Header File

| File | Description |
|------|-------------|
| `ft_printf.h` | Contains function prototypes and required includes |

The header file includes the necessary libraries for variadic arguments and output handling:

```c
#include <stdarg.h>
#include <unistd.h>
```

## How It Works

The project is based on parsing the format string character by character.

When a normal character is found, it is printed directly. When a `%` sign is found, the next character is interpreted as a conversion specifier. According to that specifier, the correct helper function is called and the corresponding argument is retrieved using `va_arg`.

Example logic:

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```

Expected output:

```text
Hello world, number: 42
```

The return value would be the number of characters printed.

## Instructions

### Requirements

- GCC compiler
- Make
- Unix-based operating system (Linux/macOS)
- 42 Norm compatibility

### Compilation and Make Commands

| Command | Description |
|---------|-------------|
| `make` or `make all` | Compiles the project |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the executable/library |
| `make re` | Recompiles the project from scratch |

### Usage

To use `ft_printf` in your project:

1. Include the header file in your source code:

   ```c
   #include "ft_printf.h"
   ```

2. Compile your program with the project files or library:

   ```bash
   cc -Wall -Wextra -Werror your_program.c libftprintf.a -o program
   ```

3. Example usage:

   ```c
   #include "ft_printf.h"

   int main(void)
   {
       ft_printf("Character: %c\n", 'A');
       ft_printf("String: %s\n", "Hello 42");
       ft_printf("Integer: %d\n", -42);
       ft_printf("Unsigned: %u\n", 42);
       ft_printf("Hexadecimal: %x\n", 255);
       ft_printf("Pointer: %p\n", &main);
       return (0);
   }
   ```

## Testing

This project can be tested by comparing the output and return values of `ft_printf` with the standard `printf`.

Example:

```c
int ft_ret;
int printf_ret;

ft_ret = ft_printf("Number: %d\n", 42);
printf_ret = printf("Number: %d\n", 42);
```

Both printed output and return values should match for supported conversions.

Important edge cases to test:

| Test Case | Expected Behavior |
|-----------|-------------------|
| `NULL` string with `%s` | Prints `(null)` |
| `INT_MIN` with `%d` or `%i` | Correctly prints the minimum integer |
| `UINT_MAX` with `%u` | Correctly prints the maximum unsigned integer |
| `0` with `%x` or `%X` | Prints `0` |
| Pointer with `%p` | Prints address in hexadecimal format |
| `%%` | Prints a single percent sign |

## Project Notes

- The project uses variadic arguments with `va_list`, `va_start`, `va_arg`, and `va_end`.
- The implementation should manage return values carefully.
- Each helper function returns the number of printed characters.
- The project should compile with:

```bash
-Wall -Wextra -Werror
```

- The code should follow the 42 Norm rules.

## Resources

### Documentation & References

- 42 Cursus ft_printf Subject - for official project requirements
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Classic C reference book
- [GNU C Library Manual - Formatted Output](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html) - Official GNU documentation
- [man7.org - printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html) - Linux manual page for printf
- [cppreference.com - printf](https://en.cppreference.com/w/c/io/fprintf) - C formatted output reference
- [cppreference.com - Variadic Arguments](https://en.cppreference.com/w/c/variadic) - C variadic functions reference

### AI Usage

While developing this project, I used AI tools as a supplemental learning resource. My goal was to treat AI like a mentor—using it to clarify the logic behind variadic functions, format parsing, number conversion, pointer printing, and edge cases related to return values.

Specifically, AI was used to:

* Understand how `va_list`, `va_start`, `va_arg`, and `va_end` work.
* Clarify the behavior of different conversion specifiers.
* Review edge cases such as `NULL` strings, `INT_MIN`, unsigned integers, and hexadecimal output.
* Double-check the general structure and readability of the implementation.

No code was copy-pasted. Every line of logic was written, debugged, and tested by me to ensure I fully grasp the underlying C concepts required by the 42 curriculum.

---

**Author:** bakumcu@student.42istanbul.com.tr
