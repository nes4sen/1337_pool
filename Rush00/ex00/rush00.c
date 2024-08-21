/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:02:18 by aces-sal          #+#    #+#             */
/*   Updated: 2024/07/28 10:27:16 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if (((a == 1) && (b == 1)) || ((a == x) && (b == y)))
				ft_putchar('o');
			else if (((a == 1) && (b == y)) || (((a == x) && (b == 1))))
				ft_putchar('o');
			else if ((a == 1 || a == x) && (b > 1 && b < y))
				ft_putchar('|');
			else if ((((a > 1) && (a < x))) && ((b == 1) || (b == y)))
				ft_putchar('-');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
