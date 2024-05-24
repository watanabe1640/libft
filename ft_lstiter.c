/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:32:44 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/24 21:46:58 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void upcontent(void *content)
// {
// 	char *str = (char *)content;
// 	while (*str)
// 	{
// 		*str = ft_toupper(*str);
// 		str++;
// 	}
// }

// void print_content(t_list *lst)
// {
// 	if(!lst)
// 		return ;
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }

// int main()
// {
// 	t_list *list = ft_lstnew(ft_strdup("hello"));
// 	t_list *next_list = ft_lstnew(ft_strdup("world"));

// 	list->next = next_list;
// 	ft_lstiter(list, upcontent);
// 	print_content(list);
// }
// // cc ft_lstiter.c ft_lstnew.c ft_toupper.c 
// ft_strdup.c ft_memcpy.c ft_strlen.c 