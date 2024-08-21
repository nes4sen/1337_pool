/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:09:36 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/30 18:42:38 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;

	if (!size)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dest_len)
		return (size + src_len);
	ft_strlcpy(dest + dest_len, src, size - dest_len);
	return (dest_len + src_len);
}

int main()
{
	char dest[20] = "hello";
	char dest2[20] = "hello";
	char src[] = "world";
	unsigned int  res = ft_strlcat(dest, src, 4);
	printf("%d\n",res);
	printf("%lu\n", strlcat(dest2, src, 4));
}
