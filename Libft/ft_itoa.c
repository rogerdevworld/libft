/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:59:05 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/27 13:40:28 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	int_len(long nbr)
{
	int	len;

	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static void	fill_result(long nbr, char *result, int len, int is_negative)
{
	int	i;

	i = len - 1;
	if (nbr == 0)
		result[0] = '0';
	else
	{
		if (is_negative)
			nbr = -nbr;
		while (nbr != 0)
		{
			result[i] = ((nbr % 10) + '0');
			nbr = nbr / 10;
			i--;
		}
		if (is_negative)
			result[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	fill_result(nbr, result, len, n < 0);
	result[len] = '\0';
	return (result);
}
/*
int main(void)
{
    int i = 0;
    int numbers[] = {123, -456, 0, 2147483647, -2147483648};
    char *str;
    
    while (i < 5)
    {
        str = ft_itoa(numbers[i]);
        if (str)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], str);
            free(str);
        }
        else
        {
            printf("Error al convertir el número %d\n", numbers[i]);
        }
        i++;
    }
    return 0;
}*/
