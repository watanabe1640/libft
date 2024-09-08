/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:32:14 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/08 09:40:12 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;
	size_t			i;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     // 検索対象の文字列
//     const char str[] = "Hello, world!";
//     // 検索する文字
//     char target = 'w';
//     // memchrを使って 'w' の位置を探す
//     // char *found = memchr(str, target, strlen(str));
//     char *found = ft_memchr(str, target, strlen(str));
//     // 結果を表示
//     if (found != NULL) {
//         printf("文字 '%c' が見つかりました: %s\n", target, found);
//     } else {
//         printf("文字 '%c' が見つかりませんでした\n", target);
//     }

//     return 0;
// }