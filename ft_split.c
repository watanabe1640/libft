/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:21:09 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 10:55:47 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*get_word(char const *str, char c, size_t start)
{
	char	*word;
	size_t	i;

	i = 0;
	while (str[start + i] && str[start + i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[start + i] && str[start + i] != c)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = get_word(s, c, i);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

// int main(void)
// {
// 	const char *str = "Hello World! This is a test.";
// 	char c = ' ';
// 	int word_count = count_words(str, c);
// 	printf("Number of words: %d\n", word_count);
// 	return 0;
// }

// int main(void)
// {
// 	const char *str = "Hello World! This is a test ";
// 	char c = ' ';
// 	char **result = ft_split(str, c);
// 	int i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return 0;
// }