/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:28:40 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/04 17:56:55 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//   // isalnumのテストケース ビルトインとの比較
//   for (char i = '0'; i <= '9'; i++)
//   {
//     if (isalnum(i))
//     {
//       printf("%c\n", i);
//     }
//   }
//   for (char i = '0'; i <= '9'; i++)
//   {
//     if (ft_isalnum(i))
//     {
//       printf("%c\n", i);
//     }
//   }
//   for (char i = 'a'; i < 'z'; i++)
//   {
//     if (isalnum(i))
//     {
//       printf("%c\n", i);
//     }
//   }
//   for (char i = 'a'; i < 'z'; i++)
//   {
//     if (ft_isalnum(i))
//     {
//       printf("%c\n", i);
//     }
//   }
//   for (char i = 'A'; i < 'Z'; i++)
//   {
//     if (isalnum(i))
//     {
//       printf("%c\n", i);
//     }
//   }
//   for (char i = 'A'; i < 'Z'; i++)
//   {
//     if (ft_isalnum(i))
//     {
//       printf("%c\n", i);
//     }
//   }
//   // isalnumの返り値が0 ビルトインとの比較
//   if (isalnum('!'))
//   {
//     printf("isalnum('!') is true\n");
//   }
//   else
//   {
//     printf("isalnum('!') is false\n");
//   }
//   if (ft_isalnum('!'))
//   {
//     printf("ft_isalnum('!') is true\n");
//   }
//   else
//   {
//     printf("ft_isalnum('!') is false\n");
//   }
// }