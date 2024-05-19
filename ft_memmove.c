/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 10:37:55 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 11:05:57 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst_ptr < src_ptr)
	{
		while (i < len)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		while (--len > 0)
			dst_ptr[len] = src_ptr[len];
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[50] = "Hello, World!";
// 
//     // 文字列内で一部を5文字後ろに移動
//     ft_memmove(str+5, str, strlen(str) + 1);

//     printf("Modified string: %s\n", str);
//     return 0;
// }