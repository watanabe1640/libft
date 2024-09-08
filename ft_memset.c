/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:00:09 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/08 10:06:20 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	//memsetのテストコード
// 	if (argc != 2)
// 	{
// 		return 0;
// 	}
// 	char *str = strdup(argv[1]);
// 	char *str1 = strdup(argv[1]);
// 	char replace = 'a';
// 	// memset(str, replace, 0);
// 	ft_memset(str1, replace, 0);
// 	printf("Modified string: %s\n", str);
// 	printf("makeit string: %s\n", str1);
// 	free(str);
// 	free(str1);
// 	return 0;
// }
