/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:25:36 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/08 08:45:46 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = ptr;
	while (i < num)
	{
		p[i] = 0;
		i++;
	}
}

// #include <strings.h>
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	//bzeroのテストケース
// 	if (argc != 2)
// 	{
// 		return 0;
// 	}
// 	char *str = strdup(argv[1]);
// 	printf("%s\n", str);
// 	ft_bzero(str, 1);

// 	int i = 0;
// 	while (i < 5)
// 	{
// 		if(str[i] == '\0')
// 		{
// 			printf("NULL,");
// 		}
// 		else
// 		{
// 			printf("%c", str[i]);
// 		}
// 		i++;
// 	}
// }
