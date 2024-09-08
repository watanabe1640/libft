/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:30:59 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/08 10:26:19 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

// #include <fcntl.h>  // open関数用
// #include <stdio.h> 
// int main() {
//     // 数字を標準出力に出力
//     ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
//     // 数字を標準エラー出力に出力
//     ft_putnbr_fd(21, 2);

//     // ファイルに数字を出力
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1) {
//         ft_putnbr_fd(120, fd);
//         close(fd);
//     }

//     return 0;
// }