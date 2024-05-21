/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:39:17 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 12:15:48 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
		str[len] = f(len, s[len]);
	return (str);
}

// char	pulusone(unsigned int i, char c)
// {
// 	return (c + 1);
// }

// int main(int argc, char const *argv[])
// {
// 	char	*str = "ABCdef123";
// 	char	*new_str = ft_strmapi(str, &pulusone);
// 	printf("%s\n", new_str);
// 	return 0;
// }
