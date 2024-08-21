/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:01:55 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/28 11:01:20 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*src)
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
int main()
{
	char src[] = "hello";
	char dest[10] = "00000000";
	printf("my strcpy : %s\n", ft_strcpy(dest, src));
	printf("original strcpy : %s\n", strcpy(dest, src));	
}
