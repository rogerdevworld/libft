/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:43:29 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/29 12:09:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_itoa_recursive(int n, char *str, int *index)
{
	if (n == -2147483648)
	{
		str[(*index)++] = '-';
		str[(*index)++] = '2';
		ft_itoa_recursive(147483648, str, index);
		return ;
	}
	if (n < 0)
	{
		str[(*index)++] = '-';
		n = -n;
	}
	if (n >= 10)
		ft_itoa_recursive(n / 10, str, index);
	str[(*index)++] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		index;

	str = (char *)malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	index = 0;
	ft_itoa_recursive(n, str, &index);
	str[index] = '\0';
	return (str);
}
