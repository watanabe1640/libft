/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:04:22 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/20 20:32:06 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strrchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}

// int main()
// {
// 	char *s1 = " ..  hello world  ..,.. ";
// 	char *set = " .";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Original string: \"%s\"\n", s1);
// 	printf("Trimmed string: \"%s\"\n", trimmed);
// 	return 0;
// 	// ccw ft_strtrim.c ft_strlen.c ft_strnstr.c 
//  // ft_substr.c ft_strdup.c ft_strrchr.c ft_memcpy.c 
// }