/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:54:55 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 15:23:44 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main(void) {
// 	t_list *node = ft_lstnew("Hello, world!");
// 	if (node) {
// 		printf("Content: %s\n", (char *)node->content);
// 		printf("Next: %p\n", node->next);
// 	}
// 	return 0;
// }