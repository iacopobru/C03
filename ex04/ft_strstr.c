/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:21:05 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/13 12:44:22 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] != to_find[j] && str[i] != '\0')
			i++;
		while (str[i] == to_find[j] && to_find[j] != '\0' && str[i] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i - j);
		j = 0;
	}
	return ('\0');
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char msg[] = "ciao hello helloo bonjure";
// 	char msg2[] = "helloo";
// 	printf("%s\n", strstr(msg, msg2));
// 	printf("%s\n", ft_strstr(msg, msg2));
// }