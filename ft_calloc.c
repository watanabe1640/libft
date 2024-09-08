/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:28:16 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/08 09:11:01 by taikwata         ###   ########.fr       */
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

// #include <stdlib.h>
// int main() {
	// Testing ft_calloc function
	//割り当てたメモリを自動的にゼロにするメモリ割り当て
	// int *arr = (int*)ft_calloc(5, sizeof(int));
	// int *arr_de = (int*)calloc(5, sizeof(int));
	// char *arr = (char*)ft_calloc(5, sizeof(char));
	// char *arr_de = (char*)calloc(5, sizeof(char));
	// if (arr != NULL) {
	// 	for (int i = 0; i < 5; i++) {
	// 		printf("%d ", arr[i]);
	// 		printf("%d ", arr_de[i]);
	// 		printf("\n");
	// 	}
	// 	printf("\n");
	// 	free(arr);
	// 	free(arr_de);
	// }
	// if (arr != NULL) {
	// 	printf("%s ", arr);
	// 	printf("%s ", arr_de);
	// 	printf("\n");
	// 	printf("\n");
	// 	free(arr);
	// 	free(arr_de);
	// }
	// return 0;
// }