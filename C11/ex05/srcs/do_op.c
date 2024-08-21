/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:27:45 by nosahimi          #+#    #+#             */
/*   Updated: 2024/08/15 09:27:50 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	testing(char *n1, char *n2, int ope, int *nb)
{
	nb[0] = ft_atoi(n1);
	nb[1] = ft_atoi(n2);
	if (nb[1] == 0 && (ope == 2 || ope == 4))
	{
		if (ope == 2)
			ft_putstr("Stop : division by zero");
		else
			ft_putstr("Stop : modulo by zero");
		return (0);
	}
	else
		return (1);
}

void	do_op(char *n1, char *op, char *n2)
{
	int		(*tab[5])(int, int);
	int		ope;
	int		nb[2];

	tab[0] = add;
	tab[1] = sub;
	tab[2] = div;
	tab[3] = mul;
	tab[4] = mod;
	ope = get_ope(op);
	if (ope != -1)
	{
		if (testing(n1, n2, ope, nb) != 0)
			ft_putnbr(tab[ope](nb[0], nb[1]));
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}

int	get_ope(char *op)
{
	int		i;
	char	list[5];

	list[0] = '+';
	list[1] = '-';
	list[2] = '/';
	list[3] = '*';
	list[4] = '%';
	i = -1;
	while (list[++i])
		if (list[i] == op[0] && op[1] == '\0')
			return (i);
	return (-1);
}
