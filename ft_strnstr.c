/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:50:44 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/19 16:58:52 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	i = 0;
	while (i <= len - needle_len && i < haystack_len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// int main() {
//     const char *long_string = "Hello, this is a simple test";
//     const char *short_string = "this";
//     char *result = strnstr(long_string, short_string, 20);

//     if (result) {
//         printf("Found '%s' in '%s' at position: %ld\n", 
// 		short_string, long_string, result - long_string);
//     } else {
//         printf("'%s' not found in the first 20 characters 
// 		of '%s'.\n", short_string, long_string);
//     }
//     return 0;
// }