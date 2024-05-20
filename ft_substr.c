/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:58:17 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/20 18:52:22 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (s_len < len + start)
		len = s_len - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "Hello World!";
// 	char *substr = ft_substr(str, 3, 5);
// 	printf("%s\n", substr);
// 	return 0;
// }