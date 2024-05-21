/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:59:27 by taikwata          #+#    #+#             */
/*   Updated: 2024/05/21 11:36:40 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_digit(int n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	if (n <= 0)
		i++;
	while (j)
	{
		j /= 10;
		i++;
	}
	return (i);
}

char	*num_to_str(long num, int len, char *str)
{
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num)
	{
		str[--len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	num = (long)n;
	len = get_num_digit(num);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num_to_str(num, len, str);
	return (str);
}

// int main() {
// 	int num = -1234567890;
// 	char *str = ft_itoa(num);
// 	printf("Number: %d\nString: %s\n", num, str);
// 	free(str);
// 	return 0;
// }