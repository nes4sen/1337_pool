/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:32:37 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/27 20:03:50 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 0 && *str <= 31) || (*str == 127))
			return (0);
		str++;
	}
	return (1);
}
/*
int main()
{
	char str[] = "wef sf";
	int res = ft_str_is_printable(str);
	printf("%d", res);
}*/
