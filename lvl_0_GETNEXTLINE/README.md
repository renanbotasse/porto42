A proposta do get_next_line é criar uma função que ao ser executada, lê uma linha do arquivo indicado por vez, em loop.


Uma explicação mais técnica seria que o get_next_line, ao ser ligado através de um FD, lê uma linha inteira desse arquivo, sempre apontando para um poiteiro que representa a string allocada com o contéudo inteiro dessa linha, terminando no item '\n' (quebra de linha) mas sem conter ela.


O GNL funciona utilizando o ponteiro que indica a string allocada, e não necessáriamente a string em si. 

Como funciona em loop, toda vez que essa string é allocada, é necessário realizar um free().

O arquivo é lido através da função read(), que vai avançando automaticamente pelo FD.

Como é necessário poder ler as informações anteriores do loop gerado, o poteiro precisa ser estático e ele deve ser vinculado ao buffer, sendo possível, assim, a leitura dos loops anteriores.

O buffer é o BUFFER_SIZE, e ele determina uma limitação no número de repetições que o loop é executado.

Os pontos mais importante do get_next_line são a compreensão das funções open(), read(), close(), variáveis estáticas e descrições de arquivos. 

Delimitações do Projeto
Se o buffer lido nao tem '\n', concatenamos com o buffer anterior e chamamos read novamente.
Se o buffer lido tem '\n', concatenamos com o buffer anterior ate o '\n'.
Se chegamos no final do arquivo (read() = 0), concatenamos com o buffer anterior.
Finalmente temos que apontar o ponteiro line passado para uma string allocada que contenha a linha inteira sem o '\n'. Depois liberamos a memoria allocada nas strings intermediarias e retornamos 1 ou 0 para '\n' ou final do arquivo respectivamente.
Se os parametros tem algum problema (BUFFER_SIZE <= 0), ou em alguma dessas operacaoes nao conseguimos allocar memoria, liberamos toda a memoria allocada e retornamos -1.
Sua função deve ser livre de vazamento de memória.
Quando você chegar ao Fim do arquivo, deverá armazenar o buffer atual em "linha". Se o buffer estiver vazio, você deve armazenar uma cadeia de caracteres vazia em "linha". Quando você chegar ao Fim do arquivo, sua função deve manter 0 memória alocada com malloc, exceto o último buffer que você deveria ter armazenado em "linha". O que você armazenou em "linha" deve ser livre-capaz. Palavras finais Chamar sua função get_next_line em um loop, portanto, permitirá que você leia o texto disponível em um descritor de arquivo uma linha de cada vez até o final do texto, independentemente do tamanho do texto ou de uma de suas linhas. Portanto, certifique-se de que sua função se comporte bem quando lê de um arquivo, da saída padrão, de um redirecionamento, etc. Para a parte obrigatória, nenhuma chamada para outra função será feita no descritor de arquivo entre 2 chamadas de get_next_line.





#GET NEXT LINE
This is the main function of the "get_next_line" program. It reads a line from the file descriptor "fd" and returns it as a string.

The function first checks if the file descriptor "fd" is less than 0 or the buffer size "BUFFER_SIZE" is less than or equal to 0. If either of these conditions is true, the function returns 0.

The function then calls the helper function "ft_read_and_save" passing the file descriptor "fd" and the static buffer "holder". The helper function reads from the file descriptor and stores the read data in the buffer "holder". If the buffer "holder" is empty, the function returns NULL.

Then the function calls a helper function "ft_gl" passing the buffer "holder" as a parameter. The helper function extracts the line from the buffer "holder".

The function then calls the helper function "ft_holder" passing the buffer "holder" as a parameter. The helper function updates the buffer "holder" by removing the extracted line and returning the updated buffer.

Finally, the function returns the line that was extracted.

It's important to notice that the function is using different names for the helper function but the functionality of the helper function remain the same.

The get_next_line() function reads a line from a file descriptor and returns it as a string, it uses the ft_read_and_save() function to read data from the file descriptor and save it in a static buffer, ft_gl() function to get a line from the buffer, and ft_holder() function to update the buffer and free any unnecessary memory. The ft_strlen(), ft_strchr() and ft_strjoin() functions are helper functions used by the other functions. The function headers are also described with useful documentation. Overall, it looks like the implementation is ready to use.

#FT_READ_AND_SAVE
The function starts by allocating memory for a buffer currentLine with a size of BUFFER_SIZE + 1 bytes. This buffer will be used to temporarily store the data read from the file descriptor.

Then, the function enters a while loop that continues until either a newline character is found in the holder string or readerOfBytes is 0, indicating that there is no more data to read. Within the while loop, the function calls the read function to read BUFFER_SIZE bytes of data from the file descriptor and stores the result in currentLine. If the read function returns -1, indicating an error, the function frees the memory allocated for currentLine and returns NULL.

Otherwise, the function sets the last byte of currentLine to the null character and concatenates currentLine to holder using ft_strjoin function. Finally, the function frees currentLine and returns holder.

This function for the get_next_line function, which reads a file and returns a line at a time.

#FT_HOLDER
 Used to save the remaining part of the read line after the newline character '\n' has been found. The function starts by finding the index of the newline character in the holder string using a while loop. If the newline character is not found, the function frees the memory allocated to holder and returns NULL. If a newline character is found, the function allocates memory for a new string s that is the size of the remaining part of the holder string after the newline character.

The function then copies the remaining part of the holder string to the new string s starting from the index after the newline character, and adds a null terminator to the end of the new string. The function then frees the memory allocated to the holder string and returns the new string s.

#FT_GL
Responsible for extracting the line from the holder buffer up to the newline character, if it exists. The function first checks if the buffer is empty, and returns NULL if it is. It then loops through the buffer until it finds a newline character or reaches the end of the buffer. It then allocates a new string of the appropriate size, copies the characters from the holder buffer up to the newline character into the new string, and adds a null terminator. It then returns the new string.

#FT_STRLEN
A function that computes the length of the input string str up to, but not including the terminating null character. The function takes in a pointer to a character array (i.e., a string) as an argument and returns the length of the string as a size_t data type. The function first initializes a variable c to 0, then checks if the input string str is a null pointer. If it is a null pointer, it returns 0. If not, it enters a while loop that increments the variable c for each non-null character in the string until it reaches the null character at the end of the string. Once the loop exits, the variable c holds the length of the string, which is then returned by the function


#FT_STRCHR
The function ft_strlen() takes in a single parameter, str, which is a pointer to a null-terminated string. It initializes a variable c to 0 and checks if the str pointer is NULL, if it is, it returns 0. If not, it enters a while loop that continues to iterate until the character at the current index of str is the null character '\0'. For each iteration, the variable c is incremented. Once the while loop terminates, c holds the length of the string and is returned.

The function ft_strchr() takes in two parameters, s, which is a pointer to a null-terminated string and c, which is the character to be searched for in s. Like ft_strlen(), it also checks if the s pointer is NULL and returns 0 if it is. If c is the null character '\0', it returns a pointer to the position in the string where the null character is located, which is the end of the string. If not, it initializes a variable i to 0, and enters a while loop that continues to iterate until the character at the current index of s is the null character '\0'. For each iteration, it checks if the character at the current index of s is equal to the character c passed as the second parameter. If it is, it returns a pointer to the current index of s. If the while loop terminates, it means the character c was not found in s, so it returns 0.


#FT_STRJOIN
A custom implementation of the C library function strcat which concatenates two strings. It takes in two strings, s1 and s2, and creates a new string, str, with the contents of s1 followed by s2. The function starts by allocating memory for the new string using malloc and then copies the characters from s1 and s2 into this new string. Finally, it adds a null terminator at the end of the new string and frees the memory allocated for the original string s1. The function then returns the new concatenated string.

