# CIRCLE 1 - 1.1 GET NEXT LINE
#### RESUME
The get_next_line() function reads a line from a file descriptor and returns it as a string, it uses the ft_read_and_save() function to read data from the file descriptor and save it in a static buffer, ft_gl() function to get a line from the buffer, and ft_holder() function to update the buffer and free any unnecessary memory. The ft_strlen(), ft_strchr() and ft_strjoin() are helper functions.

***

#### 42 EXPLANATION
The purpose of get_next_line is to create a function that, when executed, reads one line at a time from the indicated file, in a loop.
A more technical explanation would be that get_next_line, when connected through an FD, reads an entire line from this file, always pointed to a pointer that represents a string allocated with the entire content of that line, ending in the item '\n' (break line).

GNL works by **using the pointer that indicates an allocated string**, not necessarily a string itself.

As it works in a loop, every time this string is allocated, it is necessary to perform a free().

The file is read by the read() function, which advances automatically through the FD.

The pointer needs to be static and it must be linked to the buffer to be possible to read the previous loops.

The buffer (BUFFER_SIZE) sets a limitation on the number of repetitions the loop is executed.

**The most important points of get_next_line are understanding the open(), read(), close() functions, static and dynamic file variables.**


Project Delimitations
- If the read buffer does not have '\n', we concatenate it with the previous buffer and patiently read it again.
- If the read buffer has '\n', we concatenate with the previous buffer until the '\n'.
- If we reach the end of the file (read() = 0), we concatenate with the previous buffer.
- Finally, we have to point the passed line pointer to an allocated string that spanned the entire line without the '\n'. Then we free the memory allocated in the intermediate strings and return 1 or 0 for '\n' or end of file respectively.
- If the parameters have a problem (BUFFER_SIZE <= 0), or in some of these operations we do not participate in allocating memory, we release all the allocated memory and return -1.
- The function must be memory leak free.
- When you get to the end of file, you should store the current buffer in "line". If the buffer is empty, you must store a string of empty characters in "line". When you get to the end of file your function should keep 0 memory allocated with malloc except for the last buffer which you should have stored in "line". What you have stored in "line" must be free-capable.

***

#### RESUME
The get_next_line() function reads a line from a file descriptor and returns it as a string, it uses the ft_read_and_save() function to read data from the file descriptor and save it in a static buffer, ft_gl() function to get a line from the buffer, and ft_holder() function to update the buffer and free any unnecessary memory. The ft_strlen(), ft_strchr() and ft_strjoin() functions are helper functions used by the other functions. The function headers are also described with useful documentation. Overall, it looks like the implementation is ready to use.

***

#### GET NEXT LINE
This is the main function of the "get_next_line" program. It reads a line from the file descriptor "fd" and returns it as a string.

The function checks if the file descriptor "fd" is less than 0 or the buffer size "BUFFER_SIZE" is less than or equal to 0. If either of these conditions is true, the function returns 0.

Then the function calls the helper function "ft_read_and_save" passing the file descriptor "fd" and the static buffer "holder". The helper function reads from the file descriptor and stores the read data in the buffer "holder". If the buffer "holder" is empty, the function returns NULL.

After that, the function calls "ft_gl" passing the buffer "holder" as a parameter to extract the line from the buffer "holder".

Next, call the "ft_holder" passing the buffer "holder" as a parameter to update the buffer "holder" removing the extracted line and returning the updated buffer.

Finally, the function returns the line that was extracted.

***

#### FT_READ_AND_SAVE
The function starts by allocating memory for a buffer currentLine with a size of BUFFER_SIZE + 1 bytes. This buffer will be used to temporarily store the data read from the file descriptor.

Then, the function enters a while loop that continues until either a newline character is found in the holder string or readerOfBytes is 0, indicating that there is no more data to read. Within the while loop, calls the read() to read BUFFER_SIZE bytes of data from the FB and stores the result in currentLine. If the read() returns -1, indicating an error and have to frees the memory allocated for currentLine and returns NULL.

Otherwise, the function sets the last byte of currentLine to the null character and concatenates currentLine to holder using ft_strjoin(). 

In the end, frees currentLine and returns holder.

***

#### FT_HOLDER
Used to save the remaining part of the read line after the newline character '\n' has been found. Starts by finding the index of the newline character in the holder string using a while loop. If the newline character is not found, frees the memory allocated to holder and returns NULL. If a newline character is found, allocate memory for a new string s that is the size of the remaining part of the holder string after the newline character.

Then copies the remaining part of the holder string to the new string s starting from the index after the newline character, and adds a null terminator to the end of the new string. So, frees the memory allocated to the holder string and returns the new string s.

***

#### FT_GL
Responsible for extracting the line from the holder buffer up to the newline character, if it exists. First checks if the buffer is empty, and returns NULL if it is. It then loops through the buffer until it finds a newline character or reaches the end of the buffer. Then allocates a new string of the appropriate size, copies the characters from the holder buffer up to the newline character into the new string, and adds a null terminator. Finally, returns the new string.

***

#### FT_STRLEN
Computes the length of the input string str up to, but not including the terminating null character.
The function ft_strlen() takes in a single parameter, str, which is a pointer to a null-terminated string. It initializes a variable c to 0 and checks if the str pointer is NULL, if it is, it returns 0. If not, it enters a while loop that continues to iterate until the character at the current index of str is the null character '\0'. For each iteration, the variable c is incremented. Once the while loop terminates, c holds the length of the string and is returned.
***

#### FT_STRCHR
ft_strchr() takes in two parameters, s, a pointer to a null-terminated string and c, which is the character to be searched for in s. Like ft_strlen(), it also checks if the s pointer is NULL and returns 0 if it is. If c is the null character '\0', it returns a pointer to the position in the string where the null character is located, which is the end of the string. If not, it initializes a variable I to 0, and enters a while loop that continues to iterate until the character at the current index of s is the null character '\0'. For each iteration, it checks if the character at the current index of s is equal to the character c passed as the second parameter. If it is, it returns a pointer to the current index of s. If the while loop terminates, it means the character c was not found in s, so it returns 0.

***

#### FT_STRJOIN
Like strcat(), which concatenates two strings. It takes in two strings, s1 and s2, and creates a new string, str, with the contents of s1 followed by s2. The function starts by allocating memory for the new string using malloc and then copies the characters from s1 and s2 into this new string. Finally, it adds a null terminator at the end of the new string and frees the memory allocated for the original string s1. The function then returns the new concatenated string.

***

#### [TEST REPOSITORY (GNL TESTER)](https://github.com/Tripouille/gnlTester)

***

### RESULT
<a href="https://ibb.co/xGYkSCH"><img src="https://i.ibb.co/DkYJDVp/Screenshot-2023-01-24-at-20-40-15.png" alt="Screenshot-2023-01-24-at-20-40-15" border="0"></a>
