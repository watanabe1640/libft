/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:10:55 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 12:15:14 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// // テスト用のmain関数
// #include <fcntl.h>  // open関数用

// int main() {
//     // 文字を標準出力に出力
//     ft_putchar_fd('A', 1); // 'A'を標準出力に出力
//     ft_putchar_fd('\n', 1); // 改行を標準出力に出力
//     // 文字を標準エラー出力に出力
//     ft_putchar_fd('B', 2); // 'B'を標準エラー出力に出力
//     ft_putchar_fd('\n', 2); // 改行を標準エラー出力に出力
//     // ファイルに文字を出力
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1) {
//         ft_putchar_fd('C', fd); // 'C'をファイルに出力
//         ft_putchar_fd('\n', fd); // 改行をファイルに出力
//         close(fd);
//     }
//     return 0;
// }