/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:40:09 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 11:57:39 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
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
// 	char *str2 = strdup(argv[1]);
// 	printf("%s\n", str);
// 	printf("%lu\n", ft_strlcpy(str, "Hello", 5));
// 	printf("%s\n", str);
// 	printf("%lu\n", strlcpy(str2, "Hello", 5));
// 	printf("%s\n", str2);
// 	return 0;
// }