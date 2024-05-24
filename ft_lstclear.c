/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:59:08 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 19:18:27 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*dellst;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		dellst = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(dellst, del);
	}
}

// void del(void *content)
// {
//     free(content);
// }
// int main()
// {
// 	t_list *first_list = ft_lstnew(strdup("first"));
// 	t_list *second_list = ft_lstnew(strdup("second"));
// 	t_list *third_list = ft_lstnew(strdup("third"));
// 	t_list *fourth_list = ft_lstnew(strdup("fourth"));

// 	ft_lstadd_back(&first_list, second_list);
// 	ft_lstadd_back(&first_list,third_list);
// 	ft_lstadd_back(&first_list,fourth_list);
	
// 	t_list *head = first_list; 
// 	while (head->next != NULL)
// 	{
// 		printf("content: %s\n", (char *)(head->content));
// 		head = head->next;
// 	}
// 	ft_lstclear(&first_list, del);
// 	return (0);
// }