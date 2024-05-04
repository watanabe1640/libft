/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpah.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:55:30 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/04 17:56:52 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') && (c <= 'z' && c >= 'a'))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//   if (argc != 2)
//   {
//     printf("bulitin:")
//   }
// }
