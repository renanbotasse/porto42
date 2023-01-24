#FT_ATOI
"ft_atoi" takes in a single parameter "str" of the type "const char *". It converts the given string of characters (which represent a number) into an integer data type.

The function starts by initializing 3 variables: "res" to store the final integer value, "signal" to determine if the number is positive or negative, and "i" to keep track of the current index in the string.

The first while loop skips any whitespace characters (spaces, tabs, newlines, etc.) at the beginning of the string by incrementing the index "i" until a non-whitespace character is found.

Then, if the next character is either a '-' or '+', it sets the "signal" variable accordingly (-1 for '-', 1 for '+') and increments "i" again to move past the sign.

The second while loop then iterates through the rest of the characters in the string, starting from the current index "i", and converts them one by one into integers by subtracting the ASCII value of '0' from each character. It then updates the "res" variable by adding the current digit to it multiplied by 10 to shift it to the next decimal place.

Finally, the function returns the final integer value stored in "res" multiplied by the "signal" variable to account for the sign of the number.

#