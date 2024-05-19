/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 10:37:55 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 13:36:54 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst_ptr < src_ptr)
	{
		while (len--)
			*dst_ptr++ = *src_ptr++;
	}
	else
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
			*--dst_ptr = *--src_ptr;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[50] = "Hello, World!";
//     // 文字列内で一部を5文字後ろに移動
//     memmove(str+5, str, strlen(str) + 1);
//     printf("Modified string: %s\n", str);
//     return 0;
// }