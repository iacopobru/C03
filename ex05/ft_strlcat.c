/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:45:06 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/13 13:35:59 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = 0;
	src_len = 0;
	j = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char msg[] = "ciao hello helloo bonjure                                   ";
	msg[23] = 0; 
	char msg2[] = "prova";
	// printf("%ld\n", strlcat(msg, msg2, 35));
	printf("%d\n", ft_strlcat(msg, msg2, 35));

	printf("\n%s\n", msg);
	printf("%s\n", msg2);
}
*/