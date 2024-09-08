/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:29:13 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/08 09:15:19 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	// isasciiのテストケース ビルトインとの比較
// 	for (int i = -1; i < 300; i++)
// 	{
// 		if (isascii(i))
// 			printf("%c is ascii\t", i);
// 		else
// 			printf("%c is Not ascii\t", i);

// 		if (ft_isascii(i))
// 			printf("|is ascii\n");
// 		else
// 			printf("|is Not ascii\n");
// 	}
// }
