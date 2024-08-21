/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:33:30 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/25 13:36:32 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 97 && *str <= 122)))
			return (0);
		str++;
	}
	return (1);
}
/*
int main()
{
	char str[] = "hhhFhhh";
	int res = ft_str_is_lowercase(str);
	printf("%d", res);
}*/