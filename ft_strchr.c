/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:40:32 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/18 06:39:35 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*local_s;

	local_s = (const unsigned char *)s;
	while (*local_s)
	{
		if (local_s[i] == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0' && s)
		return ((char *)s);
	return ((char *)local_s);
}
/*
int	main(void)
{
    char str[] = "hola mundo new world";
    char c = 'u';

    printf("%s", ft_strchr(str, c));
    return 0;
}*/
