/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:55:45 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 12:05:56 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (!s || !f)
		return;
	size_t	len;
	
	len = ft_strlen(s);
	while (len--)
		f(len, &s[len]);
}

// void	pulusone(unsigned int i, char *c)
// {
// 	*c += 1;
// }

// int main(int argc, char const *argv[])
// {
// 	char	str[]  = "ABCdef123";
// 	ft_striteri(str, pulusone);
// 	printf("%s\n", str);
// 	return 0;
// }

