/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:51:18 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/14 12:51:24 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	return (NULL);
}

int	count_words(char *str, char *charset)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_strchr(charset, str[i])
			&& (i == 0 || ft_strchr(charset, str[i - 1])))
			count++;
		i++;
	}
	return (count);
}

void	ft_strncpy(char	*dest, char *src, int len)
{
	int	i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_allocat_words(char *str, char *charset)
{
	int		len;
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	len = 0;
	while (str[len] && !ft_strchr(charset, str[len]))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (str[i] && !ft_strchr(charset, str[i]))
		word[j++] = str[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**big;
	int		len;
	int		i;

	len = count_words(str, charset);
	big = (char **)malloc(sizeof(char *) * (len + 1));
	if (!big)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str)
		{
			big[i] = ft_allocat_words(str, charset);
			i++;
		}
		while (*str && !ft_strchr(charset, *str))
			str++;
	}
	big[i] = NULL;
	return (big);
}
