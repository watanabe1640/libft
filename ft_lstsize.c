/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:57:08 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 18:40:33 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main()
// {
// 	t_list	*first_list = ft_lstnew("first");
// 	t_list	*second_list = ft_lstnew("second");
// 	t_list	*third_list = ft_lstnew("third");
	
// 	ft_lstadd_front(&first_list,second_list);
// 	ft_lstadd_front(&first_list,third_list);
// 	printf("size		: %d\n",ft_lstsize(first_list));
// }