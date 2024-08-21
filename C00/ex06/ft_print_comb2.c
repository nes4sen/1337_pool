/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 03:39:02 by nosahimi          #+#    #+#             */
/*   Updated: 2024/07/24 04:43:39 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	r;
	int	l;

	l = 0;
	while (l <= 98)
	{
		r = l + 1;
		while (r <= 99)
		{
			ft_putchar((l / 10) + 48);
			ft_putchar((l % 10) + 48);
			write(1, " ", 1);
			ft_putchar((r / 10) + 48);
			ft_putchar((r % 10) + 48);
			if (l != 98)
				write(1, ", ", 2);
			r++;
		}
		l++;
	}
}
