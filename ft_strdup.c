/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:38:31 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/20 17:47:42 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup)
	{
		ft_memcpy(dup, s1, len);
		dup[len] = '\0';
	}
	return (dup);
}

// int main() {
// 	const char *str = "Hello, world!";
// 	char *dup = ft_strdup(str);
// 	printf("Original string: %s\n", str);
// 	printf("Duplicated string: %s\n", dup);
// 	free(dup);
// 	return 0;
// }