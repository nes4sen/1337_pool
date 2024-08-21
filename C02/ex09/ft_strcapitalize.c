/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:24:35 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/25 17:19:37 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*string;

	string = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (string);
}

char	*ft_strcapitalize(char *str)
{
	char	*string;
	int		is_cap;

	string = str;
	ft_strlowcase(str);
	is_cap = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			is_cap = 1;
		if ((*str >= '0' && *str <= '9'))
			is_cap = 0;
		if ((*str >= 'a' && *str <= 'z') && is_cap)
		{
			*str -= 32;
			is_cap = 0;
		}
		str++;
	}
	return (string);
}
/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *res = ft_strcapitalize(str);
	printf("%s", res);
}*/
