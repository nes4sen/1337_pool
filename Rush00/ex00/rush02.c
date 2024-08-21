/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:11:13 by aces-sal          #+#    #+#             */
/*   Updated: 2024/07/28 10:38:46 by nosahimi         ###   ########.fr       */
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
			if (((a == 1) && (b == 1)) || ((a == x) && (b == 1)))
				ft_putchar('A');
			else if (((a == x) && (b == y)) || (((a == 1) && (b == y))))
				ft_putchar('C');
			else if ((a == 1 || a == x) && (b > 1 && b < y))
				ft_putchar('B');
			else if ((((a > 1) && (a < x))) && ((b == 1) || (b == y)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
