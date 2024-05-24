/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:25:38 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 18:38:42 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}	
}

// int main()
// {
// 	t_list	*first_list = ft_lstnew("first");
// 	t_list	*second_list = ft_lstnew("second");
// 	t_list	*third_list = ft_lstnew("third");
	
// 	ft_lstadd_front(&first_list,second_list);
// 	printf("head		: %s\n",(char *)(first_list->content));
// 	printf("next		: %s\n",(char *)(first_list->next->content));
// 	printf("second		: %s\n\n",(char *)(second_list->content));
// 	ft_lstadd_front(&first_list,third_list);
	
// 	printf("head		: %s\n",(char *)(first_list->content));
// 	printf("next		: %s\n",(char *)(first_list->next->content));
// 	printf("next->next	: %s\n",(char *)(first_list->next->next->content));
// 	printf("second		: %s\n",(char *)(second_list->content));
// 	printf("third		: %s\n",(char *)(third_list->content));
// 	return (0);
// }