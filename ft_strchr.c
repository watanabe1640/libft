/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:43:36 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/20 20:48:19 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}
	if (*s == uc)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
// 	if (argc != 2)
// 	{
// 		return 0;
// 	}
// 	char *str = strdup(argv[1]);
// 	printf("%s\n", str);
// 	printf("%s\n", strchr(str, 'l'));
// 	printf("%s\n", ft_strchr(str, 'l'));
// 	return 0;
// }
