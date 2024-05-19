/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:14:33 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 12:18:04 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len])
		src_len++;
	i = dst_len;
	while (src[i - dst_len] && i + 1 < dstsize)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	if (dst_len < dstsize)
		dst[i] = '\0';
	return (dst_len + src_len);
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
// 	printf("%lu\n", strlcat(str, "Hello", 5));
// 	printf("%s\n", str);
// 	printf("%lu\n", strlcat(str2, "Hello", 5));
// 	printf("%s\n", str2);	
// 	return 0;
// }
