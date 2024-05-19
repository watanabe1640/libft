/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:29:18 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 12:31:39 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// int main(int argc, char const *argv[])
// {
// 	if (argc != 2)
// 	{
// 		return 0;
// 	}
// 	char c = argv[1][0];
// 	printf("%c\n", tolower(c));
// 	return 0;
// }
