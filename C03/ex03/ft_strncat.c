/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:32:06 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/30 16:43:50 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	i;

	start = dest;
	while (*dest)
		dest++;
	i = 0;
	while (*src && i < nb)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (start);
}
/*
int main()
{
	char src[] = "world";
	char dest[20] = "hello";
	char dest2[20] = "hello";
	printf("%s \n",ft_strncat(dest, src, 3));
	printf("%lu \n",strlen(ft_strncat(dest, src, 3)));
	printf("%s \n",strncat(dest2, src, 3));
	printf("%lu \n",strlen(strncat(dest2, src, 3)));
	
}*/
