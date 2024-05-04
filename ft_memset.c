/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:00:09 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/04 18:23:54 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	//memsetのテストコード
// 	if (argc != 2)
// 	{
// 		return 0;
// 	}
// 	char *str = strdup(argv[1]);
// 	char *str1 = strdup(argv[1]);
// 	memset(str, 'A', 2);
// 	memset(str1, 'B', 2);
// 	printf("Modified string: %s\n", str);
// 	printf("makeit string: %s\n", str1);
// 	free(str);
// 	free(str1);
// 	return 0;
// 	/**
// 	 * @brief メモリ領域を特定の値で埋める関数です。
// 	 *
// 	 * @param ptr 埋めるメモリ領域の先頭アドレスへのポインタ
// 	 * @param value 埋める値
// 	 * @param num 埋めるバイト数
// 	 * @return 埋められたメモリ領域の先頭アドレスへのポインタ
// 	 *
// 	 * @details `ptr` が指すメモリ領域の先頭から `num` バイト分を `value` で埋めます。
// 	 *          埋められたメモリ領域の先頭アドレスを返します。
// 	 */
// }
