/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:39:09 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 13:07:06 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char src[] = "Hello, world!";
//     char dest[20];
// 	// Test case 1: Copying a string with no null terminator
//     memcpy(dest, src, strlen(src));
//     printf("Test case 1: Copied string: %s\n", dest);

//     // Test case 2: Copying a string with null terminator
//     // memcpy(dest, src, 1 + 1);
//     // printf("Test case 2: Copied string: %s\n", dest);

//     // // Test case 3: Copying an empty string
//     // char emptySrc[] = "";
//     // memcpy(dest, emptySrc, strlen(emptySrc) + 1);
//     // printf("Test case 3: Copied string: %s\n", dest);
// }