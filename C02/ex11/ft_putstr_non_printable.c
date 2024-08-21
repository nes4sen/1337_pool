/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:23:18 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/27 12:25:03 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if ((*str >= 0 && *str <= 31) || *str == 127)
		{
			ft_putchar('\\');
			ft_putchar(hex[*str / 16]);
			ft_putchar(hex[*str % 16]);
		}
		else
			write(1, str, 1);
		str++;
	}
}
/*
int main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);

}*/
