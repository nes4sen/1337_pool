/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:21:11 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/27 20:01:42 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*d;
	unsigned int	i;

	i = 0;
	d = dest;
	while (*src && i++ < n)
		*d++ = *src++;
	while (i++ < n)
		*d++ = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "123456789";
	char dest[10];
	printf("my strcpy : %s\n", ft_strncpy(dest, src, 10));
	printf("original strcpy : %s\n", strncpy(dest, src, 10));
	
}*/
