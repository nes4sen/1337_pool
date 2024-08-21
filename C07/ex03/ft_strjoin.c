/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:49:47 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/11 02:19:15 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_allocat(char *p, char **strs, char *sep, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*p++ = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				*p++ = sep[j++];
		}
		i++;
	}
	*p = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*p;
	char	*start;
	int		i;

	if (size == 0)
		return (malloc(sizeof(char)));
	i = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
		len += ft_strlen(strs[i++]);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	start = p;
	i = 0;
	ft_allocat(p, strs, sep, size);
	return (start);
}
