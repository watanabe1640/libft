/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:04:05 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 18:40:47 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	
	if (!lst)
		return (NULL);
	while (lst)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}

// int main()
// {
// 	t_list	*first_list = ft_lstnew("first");
// 	t_list	*second_list = ft_lstnew("second");
// 	t_list	*third_list = ft_lstnew("third");
	
// 	ft_lstadd_front(&first_list,second_list);
// 	ft_lstadd_front(&first_list,third_list);

// 	printf("last		: %s\n",(char *)(ft_lstlast(first_list)->content));
// }