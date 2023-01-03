/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:00:11 by rbotasse          #+#    #+#             */
/*   Updated: 2023/01/03 19:13:54 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*backtoleft(char *s1, int offset)
{
	int		count;
	char	*array;

	count = 0;
	if (s1[offset + 1] == '\0' || offset == -1)
	{
		free(s1);
		return (NULL);
	}
	array = malloc((ft_strlen(s1) - offset + 1) * sizeof(char));
	while (s1[count + offset + 1] != '\0')
	{
		array[count] = s1[count + offset + 1];
		count++;
	}
	array[count] = '\0';
	free(s1);
	return (array);
}

//Serve para contar até o fim da string e voltar o ponto em que chegou a nova linha
int	ft_alt_strchr(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == '\n')
			return (count);
		count++;
	}
	return (-1);
}

char	*get_next_line(int fd)
{
	ssize_t		byte;
	char		*lido;
	static char	*notready;
	
//1º Condicionamos se o BUFFER_SIZE for menor ou igual a 0, retorna NULL. Pq o buffer é utilizado para receber o pointer da informação, então, se for IGUAL ou MENOR 0, não consegue receber nenhum pointer
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

//2º lido recebe o espaço de memória informado pelo Nº de elementos (buffer +1) e o tamanho do tipo que ele vai receber CHAR
	lido = ft_calloc((BUFFER_SIZE + 1), sizeof(char));

//Damos ao byte o valor de 1, para obrigar a entrar no while abaixo
	byte = 1;

//ft_alt_strchr sempre que chegar ao fim, após contar o nº de informação da string, normalmente vai retornar um valor diferente de -1, o que vai evitar de entrar no while, sendo byte maior que 0, ajuda a entra no while
	while (ft_alt_strchr(lido) == -1 && byte > 0)

//Se ultrapassar a nova linha do ft_alt_strchr, vai para o item abaixo
	{
//byte recebe o valor de READ, read usa (int fd, void *buf, size_t count) no caso em questão o FD continua sendo o próprio FD inicial. void *buf é o tamanho de memória enviado e o count é o tamanho que damos ao BUFFERSIZE)
//byte passa a valer o nº de bytes do que foi lido e a posição que terminou de ler
//passa a posição ou o tamanho do último ponto da frase?????????????????????????????????????
		byte = read(fd, lido, BUFFER_SIZE);

//se lido terminar e notready também terminar, nada teria começado então tem que retornar NULL e liberar o que tentou ser LIDO
//se o nº de byte é menor ou igual a 0 e notready terminou, também deve retornar NULL e liberar o que tentou ser lido
		if (!lido || (byte <= 0 && !notready))
		{
			free(lido);
			return (NULL);
		}
//agora, se o lido não terminou damos ao posição de memoria do byte dentro do lido, que é seria a string mais 1, a posição fim
		lido[byte] = '\0';
	
//notready recebe a string que já foi escrita com o que esta sendo escrito
		notready = ft_alt_strjoin(notready, lido);
	}
//se não chegou ainda ao fim de tudo que foi escrito
	if (ft_alt_strchr(notready) > -1)

//lido recebe o valor da nova strg que é a união das anteriores
		lido = ft_alt_strdup(lido, notready, ft_alt_strchr(notready) + 2);
	else
//se chegou ao fim, lido recebe o valor da strg final juntada
//notready recebe o valor do notready anterior
		lido = ft_alt_strjoin(lido, notready);
	notready = backtoleft(notready, ft_alt_strchr(notready));
//retorna o lido
	return (lido);
}