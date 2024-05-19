/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:14:31 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 13:46:43 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	if (argc != 2)
// 	{
// 		return 0;
// 	}
// 	char c = argv[1][0];
// 		printf("%c\n", ft_˙toupper(c));  
// 	return 0;
// }
