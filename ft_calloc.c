/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:28:16 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 19:41:06 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main() {
// 	// Testing ft_calloc function
// 	//割り当てたメモリを自動的にゼロにするメモリ割り当て
// 	int *arr = ft_calloc(5, sizeof(int));
// 	if (arr != NULL) {
// 		for (int i = 0; i < 5; i++) {
// 			printf("%d ", arr[i]);
// 		}
// 		printf("\n");
// 		free(arr);
// 	}
// 	return 0;
// }