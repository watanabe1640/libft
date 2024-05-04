/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:12:35 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/04 17:56:38 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//   for (int i = -1; i < 300; i++)
//   {
// 	if (isprint(i))
// 	  printf("%c is print\t", i);
// 	else
// 	  printf("%d is Not print\t", i);

// 	if (ft_isprint(i))
// 	  printf("|is print\n");
// 	else
// 	  printf("|is Not print\n");
//   }
// }