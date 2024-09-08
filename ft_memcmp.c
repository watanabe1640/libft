/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:52:17 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/08 09:47:25 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// // カスタム構造体の定義
// struct Person {
//     char name[20];
//     int age;
// };

// int main() {
//     // 1. 文字列の比較
//     const char *str1 = "Hello";
//     const char *str2 = "Hello";
//     const char *str3 = "World";

//     printf("文字列の比較:\n");
//     printf("str1 と str2: %d\n", memcmp(str1, str2, 5));
//     printf("str1 と str2: %d\n", ft_memcmp(str1, str2, 5));
//     printf("str1 と str3: %d\n", memcmp(str1, str3, 5));
//     printf("str1 と str3: %d\n", ft_memcmp(str1, str3, 5));

//     // 2. 整数配列の比較
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {1, 2, 3, 4, 5};
//     int arr3[] = {1, 2, 3, 4, 6};

//     printf("\n整数配列の比較:\n");
//     printf("arr1 と arr2: %d\n", ft_memcmp(arr1, arr2, sizeof(arr1)));
//     printf("arr1 と arr2: %d\n", memcmp(arr1, arr2, sizeof(arr1)));
//     printf("arr1 と arr3: %d\n", ft_memcmp(arr1, arr3, sizeof(arr1)));
//     printf("arr1 と arr3: %d\n", memcmp(arr1, arr3, sizeof(arr1)));

//     // 3. 構造体の比較
//     struct Person person1 = {"Alice", 30};
//     struct Person person2 = {"Alice", 30};
//     struct Person person3 = {"Bob", 25};

//     printf("\n構造体の比較:\n");
//     printf("person1 と person2: %d\n", memcmp(&person1, &person2, 
// sizeof(struct Person)));
//     printf("person1 と person2: %d\n", ft_memcmp(&person1, &person2,
//  sizeof(struct Person)));
//     printf("person1 と person3: %d\n", memcmp(&person1, &person3, 
// sizeof(struct Person)));
//     printf("person1 と person3: %d\n", ft_memcmp(&person1, &person3, 
// sizeof(struct Person)));

//     // 4. バイト単位の部分比較
//     unsigned char bytes1[] = {0x00, 0xFF, 0x02, 0x03};
//     unsigned char bytes2[] = {0xFF, 0x01, 0x03, 0xFF};

//     printf("\nバイト単位の部分比較:\n");
//     printf("bytes1 と bytes2 (2バイト): %d\n", memcmp(bytes1, bytes2, 2));
//     printf("bytes1 と bytes2 (2バイト): %d\n", ft_memcmp(bytes1, bytes2, 2));
//     printf("bytes1 と bytes2 (3バイト): %d\n", memcmp(bytes1, bytes2, 3));
//     printf("bytes1 と bytes2 (3バイト): %d\n", ft_memcmp(bytes1, bytes2, 3));

//     return 0;
// }
