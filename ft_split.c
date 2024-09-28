/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:13:54 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/27 13:32:22 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

//funciones internas
static int	ft_count(char const *s, char character);
static char	*ft_save_word(char const *s, char character);
static void	ft_free_split(char **result, int words);
static char	**ft_process_split(char const *s, char character, char **result);
/*
//funciones de libft
void    *ft_calloc(size_t count, size_t size);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
*/

char	**ft_split(char const *s, char character)
{
	int		words;
	char	**result;

	if (!s)
		return (NULL);
	words = ft_count(s, character);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (ft_process_split(s, character, result));
}
/*
int main() {
        int     i = 0;
    char str[] = "test de la funcion split 123 456 789 0";
    char character = ' ';
    char **result;

    result = ft_split(str, character);

    if (result) {
        while (result[i])
                {
            printf("Palabra %d: %s\n", i + 1, result[i]);
            free(result[i]);
                        i++;
        }
        free(result);
    } else {
        printf("Error\n");
    }

    return 0;
}
*/

static void	ft_free_split(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_process_split(char const *s, char character, char **result)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != character)
		{
			result[i] = ft_save_word(s, character);
			if (!result[i])
			{
				ft_free_split(result, i);
				return (NULL);
			}
			i++;
			while (*s && *s != character)
				s++;
		}
		else
		{
			while (*s && *s == character)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

static int	ft_count(char const *s, char character)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != character && word == 0)
		{
			word = 1;
			count++;
		}
		else if (*s == character)
			word = 0;
		s++;
	}
	return (count);
}

static char	*ft_save_word(char const *s, char character)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != character)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = 0;
	return (word);
}
/*
void    *ft_calloc(size_t count, size_t size)
{
        size_t                  i;
        unsigned char   *pointer;

        i = 0;
        pointer = malloc(count * size);
        if (!pointer)
                return (NULL);
        ft_bzero(pointer, count * size);
        return (pointer);
}

void    ft_bzero(void *s, size_t n)
{
        size_t                  i;
        unsigned char   *str;

        str = (unsigned char *)s;
        i = 0;
        while (i < n)
        {
                str[i] = '\0';
                i++;
        }
}
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char           *local_dest;
        const unsigned char     *local_src;
        size_t                          i;

        i = 0;
        local_dest = (unsigned char *)dest;
        local_src = (const unsigned char *)src;
        while (i < n)
        {
                local_dest[i] = local_src[i];
                i++;
        }
        return (dest);
}*/
