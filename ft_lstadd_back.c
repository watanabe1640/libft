/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:10:41 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 18:47:01 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// int main()
// {
// 	t_list *first_list = ft_lstnew("first");
// 	t_list *second_list = ft_lstnew("second");
// 	t_list *third_list = ft_lstnew("third");
// 	t_list *fourth_list = ft_lstnew("fourth");

// 	ft_lstadd_back(&first_list, second_list);
// 	printf("head		: %s\n",(char *)(first_list->content));
// 	printf("next		: %s\n",(char *)(first_list->next->content));
// 	printf("second		: %s\n\n",(char *)(second_list->content));

// 	ft_lstadd_back(&first_list,third_list);
// 	printf("head		: %s\n",(char *)(first_list->content));
// 	printf("next		: %s\n",(char *)(first_list->next->content));
// 	printf("next->next	: %s\n",(char *)(first_list->next->next->content));
// 	printf("second		: %s\n",(char *)(second_list->content));
// 	printf("third		: %s\n\n",(char *)(third_list->content));

// 	ft_lstadd_back(&first_list,fourth_list);
// 	printf("head		: %s\n",(char *)(first_list->content));
// 	printf("next		: %s\n",(char *)(first_list->next->content));
// 	printf("next->next	: %s\n",(char *)(first_list->next->next->content));
// 	printf("next->next	: %s\n",(char *)(first_list->next->next->next->content));
// 	printf("second		: %s\n",(char *)(second_list->content));
// 	printf("third		: %s\n",(char *)(third_list->content));
// 	printf("fourth		: %s\n",(char *)(fourth_list->content));
// 	return (0);
// }