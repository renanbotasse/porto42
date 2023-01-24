#### RESUME

The ft_printf() is meant to mimic the original printf() from the C standard library. The required files to turn in are the Makefile, header (extension .h) and source files (extension .c). 

The Makefile should contain the following commands: NAME, all, clean, fclean, and re. 

The external functions that you are allowed to use are malloc, free, write, va_start, va_arg, va_copy, and va_end. 

 The function should handle the conversions: c, s, p, d, i, u, x, X, and %. 

***

#### MAKEFILE
Consists of two source files "ft_printf.c" and "ft_print.c", which are compiled into the files "ft_printf.o" and "ft_print.o". 
The "CFLAGS" variable contains a list of flags passed to the compiler. 
The makefile contains several targets: "all", "clean", "fclean", and "re". "all" is the default target and creates the final executable "libftprintf.a" by running the ar command. 

- "clean" deletes the object files;
- "fclean" deletes both object files and final executable;
- "re" runs "fclean" and "all" targets to rebuild the program from scratch.

***

#### FT_PRINTF.H
The header file for the ft_printf(). It includes the necessary library headers (stdarg.h and unistd.h), and also declares a number of function prototypes for the various parts of the ft_printf():

- print_d: Printing integers in decimal format
- ft_putchar: Printing a single character
- print_p: Printing pointers in hexadecimal format
- print_u: Printing unsigned integers
- print_x: Printing integers in hexadecimal format
- print_s: Printing strings
- ft_find: a function for determining the correct formatting for a given variable argument
- ft_printf: the main function for the ft_printf library

***

#### FT_PRINTF
This function takes a format string and a variable number of arguments. The ft_printf() first initializes a va_list variable named "ptr" to hold the variable arguments and a variable "l" to keep track of the total number of characters written. Then loops through the format string, checking for the character '%' which indicates the beginning of a conversion specifier. When a '%' is found, the function calls the ft_find function, passing in the next character in the format string and the va_list pointer. 
The ft_find() checks the passed character against a series of possible conversion specifiers and calls the appropriate function to handle the conversion, and returns the number of characters written, which is added to the "l" variable. 
The va_end() is called at the end of the ft_printf() to clean up the va_list variable. 

***

#### FT_PRINT
To handle the specific conversion. The functions are:

- print_d: Takes an integer as an argument and converts it to a string of characters using recursion. It first checks if the number is negative and if so, it writes a '-' character to the standard output and makes the number positive. Then checks if the number is greater than or equal to 10, if so, it recursively calls itself with the quotient of the number divided by 10 as the argument. Then it calls itself again with the remainder of the number divided by 10 as the argument. Finally, if the number is less than 10, it writes the number to the standard output as a character.

- print_p: Takes an unsigned long integer as an argument and converts it to a string of hexadecimal characters using recursion. It first checks if the number is greater than or equal to 16, if so it recursively calls itself with the quotient of the number divided by 16 as the argument. Then it calls itself again with the remainder of the number divided by 16 as the argument. Finally, if the number is less than 16, it writes the number to the standard output as a hexadecimal character.

- print_u: Takes an unsigned integer as an argument and converts it to a string of characters using recursion. It first checks if the number is greater than or equal to 10, if so, it recursively calls itself with the quotient of the number divided by 10 as the argument. Then it calls itself again with the remainder of the number divided by 10 as the argument. Finally, if the number is less than 10, it writes the number to the standard output as a character.

- print_x: Takes an unsigned integer as an argument and converts it to a string of hexadecimal characters using recursion. It first checks if the number is greater than or equal to 16, if so it recursively calls itself with the quotient of the number divided by 16 as the argument. Then it calls itself again with the remainder of the number divided by 16 as the argument. Finally, if the number is less than 16, it writes the number to the standard output as a hexadecimal character. The second argument s is used to decide whether to use lowercase or uppercase characters.

- print_s: Takes a pointer to a string as an argument and writes the string to the standard output. If the string passed is a null pointer, the function writes "(null)" to the standard output.
All these functions will be called by ft_find function when the corresponding conversion specifier is found in the format string passed to ft_printf.



***

#### [TEST REPOSITORY (PRINTFTESTER)](https://github.com/Tripouille/printfTester)

***

#### RESULT
<a href="https://ibb.co/mzxxF7H"><img src="https://i.ibb.co/nkWW8SD/Screenshot-2023-01-24-at-21-06-29.png" alt="Screenshot-2023-01-24-at-21-06-29" border="0"></a>