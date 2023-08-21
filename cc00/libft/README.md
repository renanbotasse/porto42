# CIRCLE 0 - 0.0 LIBFT
### RESUME
I have to create my libc. We use the same prototypes and implement the functions of the original. The only difference will be their names:
- strlen: which calculates the length of a string;
- strlcpy: which copies a string to another buffer and returns the copied string's length;
- strlcat: which concatenates two strings and returns the total length of the concatenated string;
- strncmp: which compares two strings up to a specified number of characters;
- atoi: which converts a string of decimal digits to an integer;
- isalpha: which checks if a character is an alphabet;
- isprint: which checks if a character is printable;
- isdigit: which checks if a character is a digit;
- isalnum: which checks if a character is an alphanumeric;
- toupper: which converts a lowercase character to uppercase;
- tolower: which converts an uppercase character to lowercase;
- memset: which fills a memory area with a specific byte;
- bzero: which fills a memory area with zero bytes;
- memcpy: which copies a memory area to another;
- memchr: which searches for the first occurrence of a byte in a memory area;
- memcmp: which compares two memory areas;
- strnstr: which locates the first occurrence of a string in another string, but only searching at most n characters;
- strchr: which searches for the first occurrence of a character in a string and returns a pointer to the character;
- strrchr: which searches for the last occurrence of a character in a string and returns a pointer to the character;
- memmove: which copies a memory area to another, allowing the source and destination to overlap;
- isascii: which checks if a character is an ASCII character;
- calloc: which allocates a block of memory and initializes it to zero;
- strdup: which duplicates a string by allocating memory and copying the string;
- substr: which creates a new string from a specified portion of an existing string;
- strjoin: which concatenates two strings and returns a new string;
- strtrim: which removes specified characters from the beginning and end of a string;
- split: which splits a string into an array of strings based on a specified delimiter;
- itoa: which converts an integer to a string;
- strmapi: which applies a specified function to each character of a string and returns a new string;
- striteri: which applies a specified function to each character of a string in place;
- putchar_fd: which writes a character to a file descriptor;
- putstr_fd: which writes a string to a file descriptor;
- putendl_fd: which writes a string followed by a newline to a file descriptor;
- putnbr_fd: which writes an integer to a file descriptor.

***

### FUNCTIONS

- isalpha: Checks if the passed character is an alphabet letter (uppercase or lowercase) and returns a non-zero value (usually 1) if it is an alphabet letter, and 0 if it is not.

- isdigit: Checks if the passed character is a decimal digit and returns a non-zero value (usually 1) if it is a decimal digit, and 0 if it is not.

- isalnum: Checks if the passed character is an alphabet letter or a decimal digit. It returns a non-zero value (usually 1) if it is an alphabet letter or a decimal digit, and 0 if it is not.

- isascii: Checks if the passed character is an ASCII character and returns a non-zero value (usually 1) if it is an ASCII character, and 0 if it is not.

- isprint: Checks if the passed character is a printable character and returns a non-zero value (usually 1) if it is a printable character, and 0 if it is not.

- strlen: Returns the length of a null-terminated string. It takes a pointer to the string as an argument.

- memset: Fills a memory area with a specified constant byte. It takes a pointer to the memory area, the constant byte, and the number of bytes to be filled as arguments.

- bzero: Sets all the bytes of a memory area to zero. It takes a pointer to the memory area and the number of bytes to be set as zero as arguments.

- memcpy: Copies a memory area to another. It takes a pointer to the destination memory area, a pointer to the source memory area, and the number of bytes to be copied as arguments.

- memmove: Copies a memory area to another, even if the source and destination areas overlap. It takes a pointer to the destination memory area, a pointer to the source memory area, and the number of bytes to be copied as arguments.

- strlcpy: Copies a null-terminated string to another, but with a maximum size. It takes a pointer to the destination string, a pointer to the source string, and the maximum size as arguments, and returns the length of the source string.

- strlcat: Concatenates two null-terminated strings, but with a maximum size. It takes a pointer to the destination string, a pointer to the source string, and the maximum size as arguments, and returns the length of the destination string.

- toupper: Converts a lowercase alphabet letter to uppercase. It takes a character as an argument and returns the uppercase version of that character if it is a lowercase letter, otherwise it returns the original character.

- tolower: Converts an uppercase alphabet letter to lowercase. It takes a character as an argument and returns the lowercase version of that character if it is an uppercase letter, otherwise it returns the original character.

- strchr: Returns a pointer to the first occurrence of a character in a null-terminated string. It takes a pointer to the string and the character to be searched for as arguments.

- strrchr: Returns a pointer to the last occurrence of a character in a null-terminated string. It takes a pointer to the string and the character to be searched for as arguments.

- strncmp: Compares two null-terminated strings up to a specified number of characters. It takes a pointer to the first string, a pointer to the second string, and the number of characters to be compared as arguments. It returns 0 if the two strings are identical, a value less than 0 if the first non-matching character in the first string has a lower value than the corresponding character in the second string, and a value greater than 0 if the first non-matching character in the first string has a greater value than the corresponding character in the second string.

- memchr: Searches for the first occurrence of a byte in a memory area. It takes a pointer to the memory area, the byte to be searched for, and the number of bytes to be searched as arguments. It returns a pointer to the first occurrence of the byte in the memory area or a null pointer if the byte is not found.

- memcmp: Compares two memory areas. It takes a pointer to the first memory area, a pointer to the second memory area and the number of bytes to be compared as arguments. It returns 0 if the two memory areas are identical, a value less than 0 if the first byte that does not match has a lower value in the first memory area, and a value greater than 0 if the first byte that does not match has a greater value in the first memory area.

- strnstr: Locates the first occurrence of a null-terminated string in another null-terminated string, but only searching at most n characters. It takes a pointer to the string to be searched, a pointer to the string to be searched for, and the maximum number of characters to be searched as arguments.

- atoi: This function converts a string of decimal digits to an integer. It takes a pointer to the string to be converted as an argument. It scans the string for the first decimal digits and converts them to an integer, discarding any leading whitespaces or non-numeric characters.

- calloc: This function allocates and initializes a block of memory. It takes the number of elements and the size of each element as arguments and returns

***

### [TEST REPOSITORY (WAR MACHINE)](https://github.com/0x050f/libft-war-machine)

***

### RESULT
<a href="https://ibb.co/8Nqwz35"><img src="https://i.ibb.co/pbcTWDz/Screenshot-2023-01-24-at-22-03-17.png" alt="Screenshot-2023-01-24-at-22-03-17" border="0"></a>
