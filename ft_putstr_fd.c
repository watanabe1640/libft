/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:17:58 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 12:47:39 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
}

// // テスト用のmain関数
// #include <fcntl.h>  // open関数用

// int main() {
//     // 文字列を標準出力に出力
//     ft_putstr_fd("Hello, standard output!\n", 1);

//     // 文字列を標準エラー出力に出力
//     ft_putstr_fd("Hello, standard error!\n", 2);

//     // ファイルに文字列を出力
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1) {
//         ft_putstr_fd("Hello, file output!\n", fd);
//         close(fd);
//     }

//     return 0;
// }