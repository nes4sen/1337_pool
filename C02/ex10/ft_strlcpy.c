/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:44:37 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/29 21:56:14 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	size -= 1;
	while (*src && size--)
		*dest++ = *src++;
    *dest = '\0';
	return (len);
}

int main()
{
	char str1[10];
	char str2[] = "shisjfopf";
	int len = ft_strlcpy(str1, str2, 0);
	printf("%d \n", len);
	//printf("%lu \n", strlcpy(str1, str2 , 99));

}
